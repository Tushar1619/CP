#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    int vala = abs(a-1);
    int valb =0;
    if(c<b){
        valb = abs(b-1);
    }else{
        valb = c-b+abs(c-1);
    }
    int ans = 0;
    if(vala==valb){
        ans = 3;
    }
    else if(vala<valb){
        ans=1;
    }
    else{
        ans = 2;
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
