// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   string s; cin>>s;
int ans = -1;
   for(int i=0;i<s.length();i++){
    char ch = s[i];
    int c = 0;
    int idx=i;
    while(idx<s.length() && s[idx]==ch){
        c++;
        idx++;
    }
    i=idx-1;
    ans = max(ans,c);
   }
   cout<<ans<<endl;
}
signed main()
{
 
        solve();
}