#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n;
   cin>>n;
   ll k; 
   cin>>k;
   string s; cin>>s;
   vector<int> freq(26,0);

   for(int i=0;i<n;i++){
	freq[s[i]-65]++;
   }
   ll ans = 0;
   while(k>0){
	ll maxi = -1;
	int idx=-1;
	for(int i=0;i<26;i++){
		if(freq[i]>maxi){
			maxi = freq[i];
			idx=i;
		}
	}
	if(k>=maxi){
		ans+=maxi*maxi;
		freq[idx]=0;
		k-=maxi;
	}
	else{
		ans+=k*k;
		k-=k;
	}
   }
   cout<<ans<<endl;
}
signed main()
{
 
        solve();
}

