#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
// your code goes here

int t;
cin>>t;
while(t--){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
     cin>>arr[i];
     } 
     int idx=n-1;
     while(idx>=1)
     {
         if(arr[idx]<=0 && arr[idx-1]<=0){
             idx=idx-2;
         }
         else if(arr[idx]<=0 && arr[idx-1]>=0){
             idx=idx-1;
         }
         else if(arr[idx]>=0 && arr[idx-1]<=0){
             int x=arr[idx]/2;
             if(arr[idx]%2==0){
                 arr[idx]=0;
             }
             else{
                 arr[idx]=1;
             }
             arr[idx-1]-=x;
             idx--;
         }
         else{
             int x=arr[idx]/2;
             if(arr[idx]%2==0){
                 arr[idx]=0;
             }
             else{
                 arr[idx]=1;
             }
             arr[idx-1]-=x;
             idx--;
         }
     }
     
     idx=n-1;
     while(idx>=1){
         if(arr[idx]==1 && arr[idx-1]>0){
             arr[idx]=-1;
             arr[idx-1]-=1;
         }
         idx--;
     }
     
     long long int ans=0;
     for(auto i:arr){
         ans+=abs(i);
     }
     cout<<ans<<endl;
}



return 0;
}