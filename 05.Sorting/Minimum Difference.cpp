#include <bits/stdc++.h>
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
int minimum_difference(vector<int> nums)
{
    int ans = INT_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        ans = min(ans, nums[i] - nums[i - 1]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout << minimum_difference(nums);

    return 0;
}