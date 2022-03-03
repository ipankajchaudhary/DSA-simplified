class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        vector<int> vi(nums.begin(), nums.end());
        for (auto e : nums)
        {
            vi.push_back(e);
        }
        int n = nums.size();
        vector<int> v;
        stack<int> s;
        s.push(vi[2 * n - 1]);
        v.push_back(-1);
        for (int i = 2 * n - 2; i >= 0; i--)
        {
            while (!s.empty() && s.top() <= vi[i])
            {
                s.pop();
            }
            int res = (s.empty() ? -1 : s.top());
            v.push_back(res);
            s.push(vi[i]);
        }
        for (auto e : v)
            cout << e << " ";
        cout << "\n";
        reverse(v.begin(), v.end());

        vector<int> ans(v.begin(), v.begin() + n);
        return ans;
    }
};