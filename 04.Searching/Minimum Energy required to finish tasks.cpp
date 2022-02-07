// You are given an array tasks where tasks[i] = [actuali, minimumi]:

// actuali is the actual amount of energy you spend to finish the ith task.
// minimumi is the minimum amount of energy you require to begin the ith task.
// For example, if the task is [10, 12] and your current energy is 11, you cannot start this task. However, if your current energy is 13, you can complete this task, and your energy will be 3 after finishing it.

// You can finish the tasks in any order you like.

// Return the minimum initial amount of energy you will need to finish all the tasks.

// Example 1:

// Input: tasks = [[1,2],[2,4],[4,8]]
// Output: 8
// Explanation:
// Starting with 8 energy, we finish the tasks in the following order:
//     - 3rd task. Now energy = 8 - 4 = 4.
//     - 2nd task. Now energy = 4 - 2 = 2.
//     - 1st task. Now energy = 2 - 1 = 1.
// Notice that even though we have leftover energy, starting with 7 energy does not work because we cannot do the 3rd task.
// Example 2:

// Input: tasks = [[1,3],[2,4],[10,11],[10,12],[8,9]]
// Output: 32
// Explanation:
// Starting with 32 energy, we finish the tasks in the following order:
//     - 1st task. Now energy = 32 - 1 = 31.
//     - 2nd task. Now energy = 31 - 2 = 29.
//     - 3rd task. Now energy = 29 - 10 = 19.
//     - 4th task. Now energy = 19 - 10 = 9.
//     - 5th task. Now energy = 9 - 8 = 1.
// Example 3:

// Input: tasks = [[1,7],[2,8],[3,9],[4,10],[5,11],[6,12]]
// Output: 27
// Explanation:
// Starting with 27 energy, we finish the tasks in the following order:
//     - 5th task. Now energy = 27 - 5 = 22.
//     - 2nd task. Now energy = 22 - 2 = 20.
//     - 3rd task. Now energy = 20 - 3 = 17.
//     - 1st task. Now energy = 17 - 1 = 16.
//     - 4th task. Now energy = 16 - 4 = 12.
//     - 6th task. Now energy = 12 - 6 = 6.

static bool mysort(vector<int> &a, vector<int> &b)
{
    return ((a[1] - a[0]) > (b[1] - b[0]));
}
bool check(int mid, vector<vector<int>> &t)
{
    for (int i = 0; i < t.size(); i++)
    {
        if (mid < t[i][1])
        {
            return false;
        }
        mid -= t[i][0];
    }
    return true;
}
int minimumEffort(vector<vector<int>> &t)
{
    if (t.size() == 1)
    {
        return t[0][1];
    }
    sort(t.begin(), t.end(), mysort);
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i][0] << " ";
        cout << t[i][1];
        cout << "\n";
    }
    int totalspend, totalrequired = 0;
    for (int i = 0; i < t.size(); i++)
    {
        totalspend += t[i][0];
        totalrequired += t[i][1];
    }
    int low = 0;
    int high = 1e9;
    int ans = -1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (check(mid, t))
        {
            ans = mid;
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    // if(check(high,t))
    // {
    //     return high;
    // }
    return low;
}