/* A Ninja has an ‘N’ Day training schedule. He has to perform one of these three activities (Running, Fighting Practice, or Learning New Moves) each day. There are merit points associated with performing an activity each day. The same activity can’t be performed on two consecutive days. We need to find the maximum merit points the ninja can attain in N Days.

We are given a 2D Array POINTS of size ‘N*3’ which tells us the merit point of specific activity on that particular day. Our task is to calculate the maximum number of merit points that the ninja can earn.

Days = 3
Points = 10,40,70
         20,50,80
         30,60,90

Output = 210 // 70 + 80 + 90 */

int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if (dp[day][last] != -1)
    {
        return dp[day][last];
    }
    if (day == 0)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[day][i]);
            }
        }
        return dp[day][last] = maxi;
    }
    int maxi = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {
            int activity = (points[day][i]) + f(day - 1, i, dp);
            maxi = max(activity, maxi);
        }
    }
    return dp[day][last] = maxi;
}

int ninjatraining(vector<vector<int>> points)
{
    int n = points.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return f(n - 1, 3, points, dp);
}

// tabulation
int ninjatraining(vector<vector<int>> points)
{
    int n = points.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, 0));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][2], points[0][0]);
    dp[0][2] = max(points[0][1], points[0][0]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

    for (int day = 1; day <= n - 1; day++)
    {
        for (int i = 0; i < 4; i++)
        {
            dp[day][i] = 0;

            for (int task = 0; task <= 2; task++)
            {
                if (task != i)
                {
                    dp[day][i] = max(dp[day][i], points[day][task] + dp[day - 1][task]);
                }
            }
        }
    }
    return dp[n - 1][3];
}