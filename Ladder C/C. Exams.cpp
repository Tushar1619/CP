#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
   int n;
   cin>>n;
   vector< pair<int,int> > arr;
   for(int i=0;i<n;i++){
    int v1; cin>>v1;
    int v2; cin>>v2;
    arr.push_back( make_pair(v1,v2));
   } 
   
   sort(arr.begin(),arr.end());
//   cout<<arr[0].second<<endl;
   int max = 0;
   for(int i=0;i<n;i++){
        if(arr[i].second >= max){
            max = arr[i].second;
        }
        else{
            max = arr[i].first;
        }
   }
   cout<<max<<endl;
}
signed main()
{
 
        solve();
}
