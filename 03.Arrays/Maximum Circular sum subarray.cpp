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
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        nums.push_back(j);
    }
    int res = nums[0];
    int m = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        m = max(m + nums[i], nums[i]);
        res = max(res, m);
    }
    int res1 = nums[0];
    m = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        m = min(m + nums[i], nums[i]);
        res1 = min(res1, m);
    }
    int res3 = accumulate(nums.begin(), nums.end(), 0);
    if (res < 0)
    {
        cout<<res;
    }
    else{
        cout<< max(res, res3 - res1);
    }
    
    return 0;
}