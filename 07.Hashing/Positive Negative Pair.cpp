void printPairs(int arr[], int n)
{

    unordered_set<int> hs;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (hs.find((arr[i]) * -1) != hs.end())
        {
            if (arr[i] < 0)
            {
                cout << arr[i] << " ";
                cout << (arr[i] * -1) << " ";
            }
            else
            {
                cout << (arr[i] * -1) << " ";
                cout << arr[i] << " ";
            }
        }
        hs.insert(arr[i]);
    }

    return;
}
