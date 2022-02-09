int issum(int a[], int n)
{
    unordered_map<int, int> m;
    int pre = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if (pre == 0)
        {
            res = i + 1;
        }
        if (m.find(pre) == m.end())
        {
            m.insert({pre, i});
        }
        if (m.find(pre) != m.end())
        {
            res = max(res, i - m[pre]);
        }
    }
    return res;
}
int longestCommonSum(bool arr1[], bool arr2[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr1[i] - arr2[i];
    }
    return issum(temp, n);
}