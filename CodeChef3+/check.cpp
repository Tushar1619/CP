#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200001],b[200001],answer;
void solve() {
   cin >> n;answer=0;
   for(int i=1;i<=n;++i)
      cin >> a[i];
   if(n==1) {
      puts("1");
      return;
   }
   for(int i=2;i<=n;++i)
      b[i]=a[i]<a[i-1];
   // false false false true true ture
   vector<pair<bool,int>> Q;
   Q.push_back({b[2],1});
   for(int i=3;i<=n;++i)
      if(b[i]==Q[Q.size()-1].first)
         Q[Q.size()-1].second++;
      else
         Q.push_back({b[i],1});
   Q.push_back({0,0});
   // for(auto i:Q) cerr << i.first << ' ' << i.second << endl;
   // cerr << endl;
   for(int i=0;i<Q.size()-1;++i) answer+=Q[i].second*(Q[i].second+1)/2;
   for(int i=0;i<Q.size()-1;++i)
      if(Q[i].first==true)
         answer+=Q[i].second*Q[i+1].second;
   cout << answer+n << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}