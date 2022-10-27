#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
int n; cin>>n;
vector<int> a(n);
vector<int> b(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    cin>>b[i];
}
int count=0;
vector<int> visa(n,0);
vector<int> visb(n,0);
 
for(int i=0;i<n;i++){
    int key = a[i];
    int val = b[i];
    for(int j=0;j<n;j++){
        if(j==i && visb[j]==0){
            count++;
            visb[j]=1;
            continue;
        }
 
        if(a[j]==val && visa[j]==0){
            count++;
            visa[j]=1;
        }
        if(b[j]==val && visb[j]==0){
count++;
visb[j]=1;
        }
    }
}
cout<<(n*2)-count<<endl;
}
 
signed main()
{
 
        solve();
}