// https://codeforces.com/problemset/problem/467/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=1;i<=n;i++){
    arr[i-1]=i;
 }
 if(n==2 || n==3){
    cout<<"NO SOLUTION"<<endl;
    return;
 }
 if(n==4){
    cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    return;
 }
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            cout<<arr[i]<<" ";
        }
        for(int i=1;i<n;i+=2){
            cout<<arr[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i+=2){
            cout<<arr[i]<<" ";
        }
        for(int i=1;i<n;i+=2){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
signed main()
{
 
        solve();
}