vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    // Code here
    sort(intervals.begin(), intervals.end());
    int res = 0;
    int n = intervals.size();
    for (int i = 1; i < n; i++)
    {
        if (intervals[res][1] >= intervals[i][0])
        {
            intervals[res][1] = max(intervals[res][1], intervals[i][1]);
            intervals[res][0] = min(intervals[res][0], intervals[i][0]);
        }
        else
        {
            res++;
            intervals[res][0] = intervals[i][0];
            intervals[res][1] = intervals[i][1];
        }
    }
    vector<vector<int>> ans;
    for (int i = 0; i <= res; i++)
    {
        vector<int> aux;
        for (int j = 0; j < 2; j++)
        {
            aux.push_back(intervals[i][j]);
        }
        ans.push_back(aux);
        aux.clear();
    }

    return ans;
}