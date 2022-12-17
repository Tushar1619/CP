#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
    int n; cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin()+1,arr.end());
    ll ans = arr[0];
    for(int i=1;i<n;i++){
        if(ans<arr[i]){
            ans+=(arr[i]-ans+1)/2;
        }
        
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    sol();
	}
	return 0;
}
