// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n; cin>>n;
   vector<int> arr(n,-1);
   for(int i=0;i<n;i++)cin>>arr[i];
    long ans = 0;
   for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        ans+=arr[i-1]-arr[i];
        arr[i]=arr[i-1];
    }
   }
   cout<<ans<<endl;
}
signed main()
{
 
        solve();
}