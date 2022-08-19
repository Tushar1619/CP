#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans = 0;
    ll c1 = a*d;
    ll c2 = b*c;
    ll maxi = max(c1,c2);
    ll mini = min(c1,c2);
    if(c1==c2){
        ans=0;
    }
    else if(maxi%mini==0){
        ans=1;
    }
    else{
        ans=2;
    }
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
