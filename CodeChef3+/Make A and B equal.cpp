#include<bits/stdc++.h> 
#define int long long
using namespace std;

void solve() {
    int n; cin>>n;
    int sumtotal=0,sum1=0,sum2=0;
    int arr[n+1],barr[n+1];
  

  for(int i=1;i<=n;++i)
   {
    cin >> arr[i];sum1+=arr[i];
    
    }
  for(int i=1;i<=n;++i) {cin >> barr[i];sum2+=barr[i];}
  for(int i=1;i<=n;++i) 
  sumtotal+=(arr[i]>barr[i]?0:barr[i]-arr[i]);
  
  cout << (sum1==sum2?sumtotal:-1) << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}