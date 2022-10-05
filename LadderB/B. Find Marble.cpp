#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int t;
    cin>>t;
    vector<int> arr(n+1,0);
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    int ans = 0;
    while(s!=t && arr[s]!=0){
        int temp = arr[s];
        arr[s]=0;
        s=temp;
        ans++;
    }
    cout<< (s!=t?ans:-1) <<endl;
}
signed main()
{
 
        solve();
}