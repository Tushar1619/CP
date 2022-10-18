// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n+1,-1);

    for(int i=0;i<n-1;i++){
        int val; cin>>val;
        arr[val] = 1;
    }
int ans =0;
    for(int i=1;i<=n;i++){
        if(arr[i]!=1){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
 
        solve();
}