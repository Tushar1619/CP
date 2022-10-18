#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
   string s;
   cin>>s;
   int[] freq = new int[26];
   for(int i=0;i<s.length();i++){
    freq[s[i]-97]++;
   }
   int odd_count=0;
   for(int i=0;i<26;i++){
    if(freq[i]%2==1){
        odd_count++;
    }
   }
   if(odd_count%2==0){
        cout<<"Second"<<endl;
   }
   else{
        cout<<"First"<<endl;
   }
}
signed main()
{
 
        solve();
}