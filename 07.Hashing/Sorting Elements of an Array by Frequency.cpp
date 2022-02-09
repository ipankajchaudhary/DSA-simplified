#include <bits/stdc++.h>
using namespace std;

static bool mycmp(pair<int, int> &a,
                  pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return b.first > a.first;
    }
    return a.second > b.second;
}
vector<int> frequencySort(vector<int> &nums)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    vector<int> ans;
    vector<pair<int, int>> p;
    for (auto &e : m)
    {
        p.push_back(e);
    }
    sort(p.begin(), p.end(), mycmp);
    for (int i = 0; i < p.size(); i++)
    {
        int j = p[i].second;
        while (j--)
        {
            ans.push_back(p[i].first);
        }
        // cout<<p[i].first<<" "<<p[i].second;
        // cout<<"\n";
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> ans = frequencySort(a);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}