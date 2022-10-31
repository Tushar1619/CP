#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int n; cin>>n;
 int zcount = 0;
 int ocount = 0;
 int ans = 0;
vector<int> arr(n);
int l=0;
int r=0;
for(int i=0;i<n;i++){
    int val; cin>>val;
   while(val==0){
    if(zcount < ocount){
        l = i;
    }
    zcount++;
   }
   while(val==1){
    r=i-1;
    ocount++;
   }
}

}
signed main()
{
 
        solve();
}
