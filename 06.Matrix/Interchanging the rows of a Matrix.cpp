vector<vector<int>> interchange(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat[0].size();i++)
    {
        int low = 0, high = mat.size() - 1;
        while(low<high)
        {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
            
    }
    return mat;
}