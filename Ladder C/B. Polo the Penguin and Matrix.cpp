#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n; cin>>n;
  int m; cin>>m;
  int k; cin>>k;
  vector<vector<int>> arr(n,vector<int> (m,0));
  vector<int> dp( (n*m),0);
  int sum = 0;
  int idx=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
        dp[idx++]=arr[i][j];
        sum+=arr[i][j];
    }
  }
  sort(dp.begin(),dp.end());
  ll ans = 0;
 if(dp.size()%2==0){
    ll ans1 = 0;
    int mid1 = dp.size()/2;
    for(int i=0;i<dp.size();i++){
       int val = abs(dp[i]-dp[mid1]);
        if(val%k==0){
            ans1+=val/k;
        }
        else{
            ans1=-1;
            break;
        }
    }
    ll ans2 = 0;
    int mid2 = (dp.size()/2)-1;
    for(int i=0;i<dp.size();i++){
       int val = abs(dp[i]-dp[mid2]);
        if(val%k==0){
            ans2+=val/k;
        }
        else{
            ans2=-1;
            break;
        }
    }
    ans = max(ans1,ans2);
 }
 else{
    int mid = dp.size()/2;
    for(int i=0;i<dp.size();i++){
        int val = abs(dp[i]-dp[mid]);
        if(val%k==0){
            ans+=val/k;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
 }
 cout<<ans<<endl;
}
signed main()
{
 
        solve();
}
