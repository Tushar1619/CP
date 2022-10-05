#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
 long f1;
 cin>>f1;
 long f2;
 cin>>f2;
 long n;
 cin>>n;
 long arr[7];
 arr[1]=f1<0?(1000000007+f1):f1%1000000007;
 
 arr[2]=f2<0?(1000000007+f2):f2%1000000007;
 for(int i=3;i<7;i++){
    arr[i]=arr[i-1]-arr[i-2];
    if(arr[i]<0){
        arr[i]=1000000007+arr[i];
    }
    else{
        arr[i]=arr[i]%1000000007;
    }
 }
 long val = n%6;
 if(val==0){
     long ans = arr[6];
     cout<<ans<<endl;
 }
 else{
    long ans = arr[val];
     cout<<ans<<endl;
 }
    return;
}
signed main()
{
 
        solve();
}