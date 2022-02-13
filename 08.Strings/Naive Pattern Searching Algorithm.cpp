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
        cout << A[i] << ' ';
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    string t, p;
    cin >> t >> p;
     long long t=0,p=0,h=1;// avoid overflows
           int n=txt.length(), m=pat.length();
           
           int q=1000000007; // "q" should be as big as possible(at least range of txt.length()+7, in this case range of txt.length() is 10^5 so "q" should be at least 10^5+7)
           
           int d=256;// d=256 always work(range of char)
           for(int i=1;i<m;i++)
           h=(h*d)%q;
           for(int i=0;i<m;i++)
           {
               t=(t*d+txt[i])%q;
               p=(p*d+pat[i])%q;
           }
           vector<int> v;
           for(int i=0;i<=n-m;i++)
           {
               if(t==p)
               {
                   if(txt.substr(i,m)==pat)
                   v.push_back(i+1);
               }
               if(i<n-m){
               t=(d*(t-h*txt[i])+txt[i+m])%q;
               if(t<0)
               t+=q;
               }
           }
           if(v.size()==0)
           {
               v.push_back(-1);
               return v;
           }
           return v;

    return 0;
}