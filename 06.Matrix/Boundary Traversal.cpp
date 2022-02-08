vector<int> BoundaryElements(vector<vector<int>> &matrix)
{
    vector<int> v;
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                v.push_back(matrix[i][j]);
            }
        }
    }
    return v;
}