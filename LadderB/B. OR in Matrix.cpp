// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n;
 int m;
 cin>>m;
 vector<vector<int>> arr(n,vector<int>(m,-1));
 vector<vector<int>> t(n,vector<int>(m,-1));

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==0){
            for(int col=0;col<m;col++){
                t[i][col]==0;
            }
            for(int row=0;row<n;row++){
                t[row][j]==0;
            }
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(t[i][j]==-1){
            t[i][j]=1;
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int val=0;
        for(int col=0;col<m;col++){
            val|=t[i][col];
        }
        for(int row=0;row<n;row++){
            val|=t[row][j];
        }
        if(arr[i][j]!=val){
            cout<<"NO"<<endl;
            return;
        }
    }
}
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<t[i][j]<<" ";
    }
    endl;
}
}
signed main()
{
 
        solve();
}