#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
  int n;
  cin>>n;
  vector<int> arr;
  int temp = n;
  while(temp!=0){
    int ld = temp%10;
    arr.push_back(ld);
    temp/=10;
  }
  reverse(arr.begin(),arr.end());
  int max_ev_idx=arr[0];
  for(int i=0;i<arr.size();i++){
    if(arr[i]%2==0 && arr[max_ev_idx]<arr[i]){
        max_ev_idx=i;
    }
  }
  if(arr[max_ev_idx]%2==1){
    cout<<-1<<endl;
    return;
  }
    int temp = arr[max_ev_idx];
    arr[max_ev_idx] = arr[arr.size()-1];
    arr[arr.size()-1]=temp;
    int num = 0;
    for(auto el:arr){
        num = (num*10) + el;
    }
    cout<<num<<endl;
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
