long long merge(long long a[], long long low, long long mid, long long high)
{
    long long n1 = mid - low + 1, n2 = high - mid, left[n1], right[n2], res = 0;

    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[mid + 1 + i];
    }
    long long i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
            res += n1 - i;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
    return res;
}
long long merge_sort(long long a[], long long low, long long high)
{
    long long res = 0;
    if (low < high)
    {
        long long mid = (low + high) / 2;
        res += merge_sort(a, low, mid);
        res += merge_sort(a, mid + 1, high);
        res += merge(a, low, mid, high);
    }
    return res;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return merge_sort(arr, 0, N - 1);
}