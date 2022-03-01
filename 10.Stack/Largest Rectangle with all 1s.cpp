int getMaxArea(int arr[], int n)
{
    stack<int> s;
    int curr = 0, res = 0;

    for (int i = 0; i < n; i++)
    {
        // i th element is next smaller for top item
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            int t = s.top();
            s.pop();
            curr = arr[t] * (s.empty() ? i : (i - s.top() - 1));
            res = max(res, curr);
        }
        s.push(i);
    }
    // for items having no smaller element on right side
    while (s.empty() == false)
    {
        int t = s.top();
        s.pop();
        curr = arr[t] * (s.empty() ? n : (n - s.top() - 1));
        res = max(res, curr);
    }

    return res;
}
int maxArea(int M[MAX][MAX], int n, int m)
{

    int res = getMaxArea(M[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] == 1)
                M[i][j] += M[i - 1][j];
        }
        res = max(res, getMaxArea(M[i], m));
    }
    return res;
}