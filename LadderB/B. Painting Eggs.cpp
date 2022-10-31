#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
 int n;
 cin>>n;
 ll sa = 0;
 ll sb =0 ;
 string ans = "";
 for(int i=0;i<n;i++){
    int a;cin>>a;
    int b;cin>>b;
    if(a<b){
        if(abs((sa+a)-sb)<=500){
            sa+=a;
            ans+="A";
        }
        else if((abs((sb+b)-sa))<=500){
            sb+=b;
            ans+="G";
        }
        else{
            // cout<<-1<<endl;
            return;
        }
    }
    else{
        if((abs((sb+b)-sa))<=500){
            sb+=b;
            ans+="G";
        }
        else if(abs((sa+a)-sb)<=500){
            sa+=a;
            ans+="A";
        }
        else{
            // cout<<-1<<endl;
            return;
        }
    }
 }
 cout<<ans<<endl;
}
signed main()
{
 
        solve();
}