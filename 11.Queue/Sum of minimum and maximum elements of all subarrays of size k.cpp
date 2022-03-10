vector<int> max_of_subarrays(int *arr, int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vector<int> v;
    for (int i = k; i < n; i++)
    {
        v.push_back(arr[dq.front()]);
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    v.push_back(arr[dq.front()]);
    return v;
}
vector<int> min_of_subarrays(int *arr, int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[i] <= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vector<int> v;
    for (int i = k; i < n; i++)
    {
        v.push_back(arr[dq.front()]);
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[i] <= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    v.push_back(arr[dq.front()]);
    return v;
}

int solve(int arr[], int n, int k)
{
    vector<int> min = min_of_subarrays(arr, n, k);
    vector<int> max = max_of_subarrays(arr, n, k);
    int ans = accumulate(min.begin(), min.end(, 0)) + accumulate(max.begin(), max.end(), 0);
    return ans;
}