void dfs(vector<vector<int>> &grid, int i, int j, int color, int newColor)
{
    int m = grid.size();
    int n = grid[0].size();

    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != color)
        return;

    grid[i][j] = newColor;

    dfs(grid, i - 1, j, color, newColor);
    dfs(grid, i + 1, j, color, newColor);
    dfs(grid, i, j - 1, color, newColor);
    dfs(grid, i, j + 1, color, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    if (image[sr][sc] != newColor)
    {
        dfs(image, sr, sc, image[sr][sc], newColor);
    }
    return image;
}