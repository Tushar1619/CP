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
 int s=0;
 int v=0;
 for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        s=i;
        v++;
    }
 }

//   cout<<s<<" "<<v<<endl;
if(arr[n-1]>arr[0]){
     s=n-1;
     v++;
 }
 if(v>1){
     cout<<-1<<endl;
     return;
 }
 if(v==0){
     cout<<0<<endl;
     return;
 }
 cout<<n-s-1<<endl;
}
signed main()
{
 
        solve();
}