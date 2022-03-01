vector<int> leftSmaller(int n, int a[]){
        vector<int> v;
        stack<int>s;
        v.push_back(-1);
        s.push(a[0]);
        for(int i = 1;i<n;i++)
        {
            while(!s.empty() && s.top() >= a[i])
            {
                s.pop();
            }
            int res = (s.empty() ? -1 : s.top());
            v.push_back(res);
            s.push(a[i]);
        }
        return v;
    }