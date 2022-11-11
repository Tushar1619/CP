#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin>>n;
    int k; cin>>k;
    int i;int j;
  vector< ll > x(n + 1) , sum(n - k + 2 , 0) , nax(n - k + 2 , n - k + 1) ;
        for(i = 1 ; i <= n ; i ++ ) cin >> x[i] ;
        for(i = 1 ; i <= k ; i ++ ) sum[1] += x[i] ;
        for(i = 2 ; i <= n - k + 1 ; i ++ ) sum[i] = sum[i - 1] + x[i + k - 1] - x[i - 1] ;
        for(i = n - k ; i >= 1 ; i -- ){
            j = nax[i + 1] ;
            if(sum[i] >= sum[j]){
                nax[i] = i ;
            }
            else{
                nax[i] = j ;
            }
        }
        ll ans = 0 ;
        ll ix = 1 , jx = 1 + k ;
        for(i = 1 ; i <= n ; i ++ ){
            j = i + k ;
            if(j > n - k + 1) break ;
            if(ans < sum[i] + sum[nax[j]]){
                ans = sum[i] + sum[nax[j]] ;
                ix = i ;
                jx = nax[j] ;
            }
        }
        cout << ix << ' ' << jx ;

}
signed main()
{
 
        solve();
}
