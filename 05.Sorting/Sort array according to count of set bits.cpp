int countBits(int a)
{
    int count = 0;
    while (a) {
        if (a & 1)
            count += 1;
        a = a >> 1;
    }
    return count;
}

int cmp(int a, int b)
{
    int count1 = countBits(a);
    int count2 = countBits(b);
    if (count1 <= count2)
        return false;
    return true;
}
void sortBySetBitCount(int arr[], int n)
{
    stable_sort(arr, arr + n, cmp);
}
 