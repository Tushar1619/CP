#include <iostream>
#include <cmath>
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void sol(){
    int x1,y1; cin>>x1>>y1;
    int x2,y2; cin>>x2>>y2;
    int x3,y3; cin>>x3>>y3;

    int val1 = x2-x1;
    int val2 = x3-x1;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    val1 = x1-x2;
    val2 = x3-x2;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    val1 = x1-x3;
    val2 = x2-x3;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    val1 = y2-y3;
    val2 = y1-y3;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    val1 = y2-y1;
    val2 = y3-y1;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    val1 = y1-y2;
    val2 = y3-y2;
    if( (val1<0 && val2>0) || val1>0 && val2<0){
           System.out.println("YES");
           return;
    }
    System.out.println("NO");
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
