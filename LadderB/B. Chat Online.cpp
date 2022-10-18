// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
int p;
cin>>p;
int q;
cin>>q;
int l;
cin>>l;
int r;
cin>>r;
vector<vector<int>> a(p,vector<int>(2));
vector<int> donet(1000);
int count=0;
for(int i=0;i<p;i++){
    cin>>a[i][0];
    cin>>a[i][1];
}
for(int i=0;i<q;i++){
    int gg; cin>>gg;
    int bb; cin>>bb;
    for(int j=0;j<p;j++){
        bool flag=false;
        for(int k=l;k<=r;k++){
            int stime = gg+k;
            int etime = bb+k;
            if(donet[k]==1)continue;
             if(stime<=a[j][0] && etime>=a[j][1]){
                 
                // cout<<"1"<<endl;
                flag=true;
            }
            else if(stime>=a[j][0] && etime<=a[j][1]){
                flag=true;
                // cout<<"2"<<endl;
            }
            else if( stime<=a[j][1] && stime>=a[j][0] && etime>=a[j][1]){
                // cout<<"3"<<endl;
                flag=true;
            }
            else if(stime<=a[j][0] && etime>=a[j][0] && etime<=a[j][1]){
                // cout<<"4"<<endl;
                flag=true;
            }
            else{
                flag=false;
            }
            if(flag){
                count++;
                donet[k]=1;
            }
        }
    }
   
}
 cout<<count<<endl;
}
signed main()
{
 
        solve();
}