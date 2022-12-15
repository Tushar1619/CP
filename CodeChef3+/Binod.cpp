#include <iostream>
using namespace std;
#define int long long

void solve(){
         int n;
     int q;
     cin>>n>>q;
    int a[70][n];
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       for(int j=0;j<64;j++){
           a[j][i]= x%2;
           x/=2;
       }
   }
   for(int i=0;i<64;i++){
       int count=0;
       for(int j=0;j<n;j++)
       {
           count+=a[i][j];
           a[i][j]=count;
       }
   }

    for(int i=0;i<q;i++){
       int l1,r1,l2,r2,k;
       cin>>k>>l1>>r1>>l2>>r2;
       r1--;
       r2--;
       l1--;
       l2--;
       
       int tf=r1-l1+1;
       int totals=r2-l2+1;
       int tfo;
       int tso;
       if(l1==0){
           tfo=a[k][r1];
       }
       else
       tfo=a[k][r1]-a[k][l1-1];
       
       
        if(l2==0){
           tso=a[k][r2];
       }
       else{
        
       tso=a[k][r2]-a[k][l2-1];
       }
        long sum = (tf-tfo)*(tso) + (tfo)*(totals-tso);
       cout<<sum<<endl;
   }

}
signed main() {
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}