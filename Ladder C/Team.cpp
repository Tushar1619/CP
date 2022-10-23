
// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n ;  cin>>n;
       int m ;  cin>>m;

       int pair = m/2;
       if(m%2==1){
        pair++;
       }
       pair--;
       if(n<pair){
        cout<<-1<<endl;
        return;
       }
       if(m<n-1){
        cout<<-1<<endl;
        return;
       }
       if(m==n-1){
            int idx=0;
            while(idx<n-1){
                // sb.append('0');
                // sb.append('1');
                cout<<0<<1;
                idx++;
            }
            cout<<0;
       }
       else{

        while(n!=m && n!=0){
            cout<<110;
            // sb.append("110");
            n--;
            m-=2;
        }
        while(n>0){
            // sb.append("10");
            cout<<10;
            n--;
            m--;
        }
        while(m>0){
            // sb.append('1');
            cout<<1;
            m--;
        }
       }
    //    System.out.println();
    cout<<endl;
}
signed main()
{
        // int t;
    // cin>>t;
    // while(t-->0)
        solve();
}