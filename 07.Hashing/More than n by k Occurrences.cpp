void morenbyk(vector<int>  a, int k)
{
    unordered_map<int> m;
    for(int i:a)
    {
        m[i]++;
    }
    for(auto e:m)
    {
        if(e.second >= n/k)
        {
            cout << e.first;
        }
    }
}