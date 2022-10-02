// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];

 int ans = 2*n-1;
    ans+=arr[0];
 for(int i=1;i<n;i++){
     ans+=abs(arr[i]-arr[i-1]);
 }
 cout<<ans<<endl;
}
signed main()
{
 
        solve();
}