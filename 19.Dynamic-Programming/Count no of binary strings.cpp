// Given a positive integer N, count all possible distinct binary strings of length N
// such that there are no consecutive 1’s. Output your answer mod 10^9 + 7.
// Input:
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
// Each test case contain an integer N representing length of the binary string.
// Output:
// Print the count number of binary strings without consecutive 1’s of length N.
// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 100
// Example:
// Input:
// 2
// 3
// 2
// Output:
// 5
// 3
// Explanation:
// Testcase 1: case 5 strings are (000, 001, 010, 100, 101)
// Testcse 2:  case 3 strings are (00,01,10)
// OJ: https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed/0

long long countstrings(int n){
    int arr[n+1];
    arr[0]=1;
    arr[1]=2;
    for( int i=2;i<=n; i++)
    {
        arr[i]=(arr[i-1]+arr[i-2])%1000000007;
    }
    return arr[n];
}