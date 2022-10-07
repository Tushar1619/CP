// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin>>n;
int mfet=(n-1)*2;
vector<vector<int>>arr(n,vector<int>(2,0));
vector<int> home(100001,0);
for(int i=0;i<n;i++){
    cin>>arr[i][0];
    cin>>arr[i][1];
}
for(int i=0;i<n;i++){
    home[arr[i][0]]++;
}
int ans[n][2];
for(int i=0;i<n;i++){
    int h=(n-1);
    int a=0;
    int col=arr[i][1];
    int val = home[col];
    h+=val;
    a=mfet-h;
    ans[i][0]=h;
    ans[i][1]=a;
}
for(int i=0;i<n;i++){
    cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
}
}
signed main()
{
 
        solve();
}