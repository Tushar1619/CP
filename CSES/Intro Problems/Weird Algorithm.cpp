// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    long n;
cin>>n;
    while(n!=1){
        cout<<n<<endl;
        if(n%2==0){
            n=n/2;
        }
        else{
            n = (n*3)+1;
        }
    }
        cout<<1<<endl;
}
signed main()
{
 
        solve();
}