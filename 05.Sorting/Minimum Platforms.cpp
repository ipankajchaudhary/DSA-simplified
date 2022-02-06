int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    sort(arr, arr + n);
    sort(dep, dep + n);
    int plat = 1;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > dep[j])
            j++;
        else
            plat++;
    }
    return plat;
}