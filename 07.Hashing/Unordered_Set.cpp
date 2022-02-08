#include <bits/stdc++.h>
using namespace std;

void scan(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] <<' ';
    }
}
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for (int x: s)
    {
        cout << x << " ";
    }
    cout << "\n";
    
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout<<endl;
    cout << s.size();
    cout<<endl;
    if(s.find(15) == s.end())
    {
        cout << "NOT FOUND";
    }
    else{
        cout << "FOUND";
    }
    cout<<endl;
    if(s.count(15))
    {
        cout << "FOUND";
    }
    else{
        cout << "NOT FOUND";
    }
    s.erase(15);
    cout<<endl;
    cout << s.size();
    cout<<endl;
    auto it = s.find(10);
    s.erase(it);
    cout << s.size();
    cout<<endl;
    s.erase(s.begin(), s.end());
    cout << s.size();
    cout<<endl;


    return 0;
}