// Method 1
int lcs(vector<int> a)
{
    sort(a.begin(), a.end());
    int cur = 0, res = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1] + 1)
        {
            cur++;
        }
        else
        {
            res = max(res, curr);
            cur = 1;
        }
    }
    res = max(res, curr);
    return res;
}

// Method 2
int findLongestConseqSubseq(int arr[], int n)
{
    unordered_set<int> S;
    int ans = 0;
     for (int i = 0; i < n; i++)
        S.insert(arr[i]);
 
    for (int i = 0; i < n; i++)
    {
    
        if (S.find(arr[i] - 1) == S.end())
        {
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}
 