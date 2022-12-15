#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void sol(){
	int n;
	vector<int> arr(1000000008);
    for(int i=0;i<2*n;i++){
        int val; cin>>val;
        arr[val]++;
    }
    bool flag = true;
    for(int i=0;i<arr.length;i++){
        if(arr[i]>2){
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

