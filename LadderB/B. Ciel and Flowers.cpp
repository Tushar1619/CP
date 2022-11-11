#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
int r; cin>>r;
int g; cin>>g;
int b; cin>>b;
int ans = 0;
if(r>=1 && b>=1 && g>=1){
    ans = max(ans,(r-1)/3+(b-1)/3+((g-1)/3)+1);
}
 if(r>=2 && b>=2 && g>=2){
    ans = max(ans,(r-2)/3+(b-2)/3+((g-2)/3)+2);
}
// else {
    ans = max(ans,(r/3)+(b/3)+(g/3));
// }
cout<<ans<<endl;
}
signed main()
{
 
        solve();
}