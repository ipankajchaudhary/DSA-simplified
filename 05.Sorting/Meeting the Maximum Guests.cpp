vector<int> findMaxGuests(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 1;
    int j = 0;
    int res = 1;
    int curr = 1;

    int mintime = arr[0];

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        if (curr > res)
        {
            res = curr;
            mintime = arr[i - 1];
        }
    }

    vector<int> ans = {res, mintime};
    // return ans;
    return ans;
}