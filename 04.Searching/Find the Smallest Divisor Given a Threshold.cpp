// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// The test cases are generated so that there will be an answer.

// Example 1:

// Input: nums = [1,2,5,9], threshold = 6
// Output: 5
// Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1.
// If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2).
// Example 2:

// Input: nums = [44,22,33,11,1], threshold = 5
// Output: 44


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
bool isdivisorlessthanthreshold(vector<int> nums, int mid, int threshold)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        double d = (double)(nums[i] / (double)mid);
        sum += ceil((double)d);
    }
    return sum <= threshold;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    //         FFFFFFFFFFTTTTTTTTTTTTTTT
    int low = 1;
    int high = 1e6;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isdivisorlessthanthreshold(nums, mid, threshold))
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    
    vector<int> nums;
    int n;
    cin >> n;
    int threshold;
    cin >> threshold;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << smallestDivisor(nums, threshold);
    return 0;
}