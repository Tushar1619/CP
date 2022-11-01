#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
 string a; cin>>a;
 string b; cin>>b;
 if(a.size()!=b.size()){
    cout<<"NO"<<endl;
    return;
 }
int azcount = 0;
int bzcount = 0;
int aocount = 0;
int bocount = 0;
for(int i=0;i<a.length();i++){
    if(a[i]=='0')azcount++;
    else aocount++;
}
for(int i=0;i<b.length();i++){
    if(b[i]=='0')bzcount++;
    else bocount++;
}
if(azcount==bzcount && aocount==bocount){
    cout<<"YES"<<endl;
    return;
}
if(azcount==a.length() && bocount>=1){
    cout<<"NO"<<endl;
    return;
}
if(bzcount<=aocount+azcount-1){
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