#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
    int n;
	cin>>n;
	int fmax=INT_MIN;
	int smax=0;
	int fmin=INT_MAX;
	int smin=0;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(val>fmax){
			fmax=val;
			smax=fmax;
		}
		if(val<fmin){
			fmin=val;
			smin=fmin;
		}
	}
	cout<<fmax+smax-fmin-smin<<endl;
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
