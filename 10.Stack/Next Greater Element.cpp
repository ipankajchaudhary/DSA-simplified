<<<<<<< HEAD
vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long>s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i = n-2;i>=0;i--)
        {
            while(!s.empty() && s.top() <= arr[i])
            {
                s.pop();
            }
            long long res = (s.empty() ? -1 : s.top());
            v.push_back(res);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
=======
vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long>s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i = n-2;i>=0;i--)
        {
            while(!s.empty() && s.top() <= arr[i])
            {
                s.pop();
            }
            long long res = (s.empty() ? -1 : s.top());
            v.push_back(res);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
>>>>>>> 929f53bf89c3f0c098beb7648b20d1a192ec35e2
