// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
int total_sum = 0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        total_sum+=arr[i][j];
    }
}
int d_sum = total_sum/2;
int r1 = arr[0][0]+arr[0][1]+arr[0][2];
int r2 = arr[1][0]+arr[1][1]+arr[1][2];
int r3 = arr[2][0]+arr[2][1]+arr[2][2];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==0){
            if(i==0){
                arr[i][j]=d_sum-r1;
            }
            else if(i==1){
                arr[i][j]=d_sum-r2;
            }
            else{
                arr[i][j]=d_sum-r3;
            }
        }
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]+" ";
    }
    cout<<endl;
}
}
signed main()
{
 
        solve();
}