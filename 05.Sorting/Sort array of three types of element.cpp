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
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	while (mid <= hi) {
		switch (a[mid]) {
		case 0:
			swap(a[lo++], a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}
int main()
{
     int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    sort012(arr, n);
    print(arr, n);
    return 0;
}