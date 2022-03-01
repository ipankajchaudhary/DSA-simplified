vector <int> calculateSpan(int arr[], int n)
    {
       stack<int>s;
       s.push(0);
       vector<int> v;
       v.push_back(1);
       for(int i = 1;i<n;i++)
       {
           while(!(s.empty()) && arr[s.top()] <= arr[i])
           {
               s.pop();
           }
           int res = (s.empty() ? i+1 : i-s.top());
           v.push_back(res);
           s.push(i);
       }
       return v;
    }
