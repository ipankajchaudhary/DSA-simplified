#include <iostream>
using namespace std;

void scan(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    int min_ind = -1;
    for (int i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }
    print(arr, n);

    return 0;
}