// Naive
// for every bar, (consider at the smallest bar) traverse left to it, find greater or equal bar, and then traverse right to it. Find greater or equal bar. Stop traversing when smaller bar occured

long long getMaxArea(long long arr[], int n)
{
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        long long curr = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
                curr += arr[i];
            else
                break;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
                curr += arr[i];
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

// Better Solution
// 1   Initialize res = 0
// 2   Find previous smaller element for every element
// 3   Find next smaller element for every element
// 4   Do following for every element arr[i]
//     curr = arr[i];
//     curr += (i - 1 - ps[i]) * arr[i];
//     curr += (ns[i] - i - 1) * arr[i];
//     res = max(Res, curr);
// 5   return res;

// arr[] = 6  2 5 4  1 5 6
// ps[] = -1 -1 1 1 -1 4 5
// ns[] =  1  4 3 4  7 7 7

long long getMaxArea(long long arr[], int n)
{
    stack<long long> s;
    long long curr = 0, res = 0;

    for (int i = 0; i < n; i++)
    {
        // i th element is next smaller for top item
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            long long t = s.top();
            s.pop();
            curr = arr[t] * (s.empty() ? i : (i - s.top() - 1));
            res = max(res, curr);
        }
        s.push(i);
    }
    // for items having no smaller element on right side
    while (s.empty() == false)
    {
        long long t = s.top();
        s.pop();
        curr = arr[t] * (s.empty() ? n : (n - s.top() - 1));
        res = max(res, curr);
    }

    return res;
}