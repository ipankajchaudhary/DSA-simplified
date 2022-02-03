// You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.

// Notice that x does not have to be an element in nums.

// Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.

// Example 1:

// Input: nums = [3,5]
// Output: 2
// Explanation: There are 2 values (3 and 5) that are greater than or equal to 2.
// Example 2:

// Input: nums = [0,0]
// Output: -1
// Explanation: No numbers fit the criteria for x.
// If x = 0, there should be 0 numbers >= x, but there are 2.
// If x = 1, there should be 1 number >= x, but there are 0.
// If x = 2, there should be 2 numbers >= x, but there are 0.
// x cannot be greater since there are only 2 numbers in nums.
// Example 3:

// Input: nums = [0,4,3,0,4]
// Output: 3
// Explanation: There are 3 values that are greater than or equal to 3.

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
int countelementsgreaterthanmid(vector<int> nums, int mid)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= mid)
        {
            count++;
        }
    }
    return count;
}
int specialArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int low = 0;
    int high = nums.size();
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (countelementsgreaterthanmid(nums, mid) == mid)
        {
            return mid;
        }
        if (countelementsgreaterthanmid(nums, mid) > mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    
    vector<int> nums;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << specialArray(nums);
    return 0;
}