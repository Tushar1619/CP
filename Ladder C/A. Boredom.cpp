#include <bits/stdc++.h>
#define ll long long
using namespace std;
//  int rec(vector<int> &freq,vector<int> &arr,int idx,int prev,vector<vector<int>> &dp){
//     if(idx==0){
//         if(arr[idx]<prev-1) {
//             return dp[idx][prev]=arr[idx]*freq[arr[idx]];
//         }
//         else return dp[idx][prev]=0;
//     }
//     if(prev!=-1 && dp[idx][prev]!=-1)return dp[idx][prev];
//     int take =0;
//     if(prev==-1 || arr[idx]<prev-1){
//         take = (arr[idx]*freq[arr[idx]])+rec(freq,arr,idx-1,arr[idx],dp);
//     }
//     int not_take = rec(freq,arr,idx-1,prev,dp);

//     return dp[idx][prev]=max(take,not_take);
//  }
void solve()
{
   int n;
	cin >> n;
	vector<int> v(n);
	int m = 0;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		m = max(m,v[i]);
	}
	ll cnt[100005] = {0};
	for(int i = 0; i < n; i++) cnt[v[i]]++;
	ll dp[100005];
	dp[0] = 0;
	dp[1] = cnt[1];
	for(int i = 2; i <= m; i++){
		dp[i] = max(dp[i-1],i*cnt[i] + dp[i-2]);
	}
	cout << dp[m] << "\n";
}
signed main()
{
 
        solve();
}
