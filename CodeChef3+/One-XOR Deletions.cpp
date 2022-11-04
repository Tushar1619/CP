#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> freq(n+2,0);
   for(int i=0;i<n;i++){
    int val; cin>>val;
    freq[val]++;
   }
   int ans = 0;
   for(int i=0;i<=n;i++){
    int cnt = freq[i]+freq[i+1];
    if(i%2==0 && cnt>ans){
      ans = cnt;
    }
   }
   cout<<n-ans<<endl;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}