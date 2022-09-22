#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
  int n;
  cin>>n;
  int x;int y;
  cin>>x>>y;
  if(x>y){
    int temp = y;
    y=x;
    x=temp;
  }
  if(y==0){
   cout<<-1<<endl;
    return;
  }
  else{
    if( (n-1)%y!=0) cout<<-1<<endl;
    else{
      for(int i=1;i<=y;i++)cout<<-1<<endl;
      int cur = y+2;
    }
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
