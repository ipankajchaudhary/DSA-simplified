int tour(vector<pair<int,int>> p, int n)
{
    int prev = 0, curr = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        curr += (p[i].first - p[i].second);
        if (curr < 0)
        {
            start = i + 1;
            prev += curr;
            curr = 0;
        }
    }
    if (curr + prev >= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
}