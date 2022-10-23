
// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int> arr (n);
   ll total_sum = 0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    total_sum+=arr[i];
   }
   ll ans = 0;
    if(total_sum%3==0){
        ll num1 = total_sum/3;
        ll num2 = 2*num1;
        ll sum = 0;
        ll count=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
            if(sum==num2){
                ans+=count;
            }
            if(sum==num1){
                count++;
            }
            
        }
    }
    cout<<ans<<endl;
}
signed main()
{
        // int t;
    // cin>>t;
    // while(t-->0)
        solve();
}