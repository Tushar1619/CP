// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
int n;
int t;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int l=0;
int r=0;
int ans=0;
int sum=0;
while(r<n){
    sum+=arr[i];
    while(sum>t){
        sum-=arr[l];
        l++;
    }
    ans = max(ans,r-l+1);
    r++;
}
cout<<ans<<endl;
}
signed main()
{
 
        solve();
}