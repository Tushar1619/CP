#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
   int n;
   int m;
   cin>>n;
   cin>>m;
   vector<int> arr(m);
   for(int i=0;i<m;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   if(arr[0]==1 || arr[m-1]==n) {
    cout<<"NO"<<endl;
    return;
   }
   int count=1;
   bool flag = true;
   for(int i=0;i<m-1;i++){
    if(arr[i]+1==arr[i+1])count++;
    else  count=1;
    if(count==3){
        // cout<<arr[i+1]<<endl;
        flag=false;
        break;
    }
   }
   if(flag){
        cout<<"YES"<<endl;
   }
   else{
        cout<<"NO"<<endl;
   }
}
signed main()
{
 
        solve();
}