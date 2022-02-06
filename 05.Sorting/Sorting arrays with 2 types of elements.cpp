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
        cout << A[i];
    }
}
void sort2types(int arr[], int n)
{
    int i = -1;
    int j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j]>=0);
        if(i>=j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    sort2types(arr, n);
    print(arr, n);

    return 0;
}