// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int count_one_in_x(int x){
    int count_one=0;
    for(int i=0;i<32;i++){
        if( ( (1<<i) & x ) == (1<<i) ){
            // cout<<i<<+" ";
            count_one++;
        }
    }
    return count_one;
}
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<m+1;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<m;i++){
    int el = arr[i];
    ll x = el^arr[m];
    if(count_one_in_x(x)<=k){
        count++;
    }
    }
    cout<<count<<endl;
}
signed main()
{
 
        solve();
}