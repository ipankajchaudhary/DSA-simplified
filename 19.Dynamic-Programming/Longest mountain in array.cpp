int LongestBitonicSequence(vector<int> nums)
{
    int n = nums.size();
    int lis[n];
    int lds[n];
    lis[0] = 1;
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }
    lds[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        lds[i] = 1;
        for (int j = n - 1; j > i; j--)
        {
            if (nums[j] < nums[i])
            {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, lis[i] + lds[i] - 1);
    }
    return res;
}