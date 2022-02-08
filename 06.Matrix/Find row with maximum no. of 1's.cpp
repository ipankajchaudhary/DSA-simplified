int maxOnes(vector<vector<int>> &Mat, int N, int M)
{
    // your code here
    int ans = 0;
    int j = 0;
    while (j < m)
    {
        for (int i = 0; i < n; i++)
        {
            if (mat[i][j] == 1)
                return i;
        }
        j++;
    }

    return ans;
}