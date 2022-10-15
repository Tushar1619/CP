// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int zcount=0;
   int ocount=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1')ocount++;
    else zcount++;
   }
   if(zcount%2==1 && ocount%2==1){
    cout<<"NO"<<endl;
    return;
   }
   else{
    cout<<"YES"<<endl;
   }
}
signed main()
{
    int t;
    cin>>t;
    while(t-->0)
        solve();
}