#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 vector<int> time(1450,0);
 int n; cin>>n;
 for(int i=0;i<n;i++){
    int hr; cin>>hr;
    int min ; cin>>min;
    int val = (hr*60)+min;
    time[val]++;
 }
 int ans = 1;
 for(int i=0;i<1450;i++){
        if(time[i]>ans){
            ans=time[i];
        }
 }
 cout<<ans;
}
signed main()
{
 
        solve();
}


