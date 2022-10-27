#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int r; cin>>r;
 int g; cin>>g;
 int b; cin>>b;

 int mini = min(r,min(g,b));
 int maxi = min(r,max(g,b));
 long smin = r+g+b-mini-maxi;
 int ans = min(r+g+b/3,mini+smin);
 cout<<ans<<endl;

}
signed main()
{
 
        solve();
}