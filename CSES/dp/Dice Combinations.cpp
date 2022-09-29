#include <cstdlib>
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int mod = 1000000007;
int rec(int n,vector<int>& dp){
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
        int ans=0;
    for(int i=1;i<=6;i++){
        if(n>=i){
           ans=(ans+rec(n-i,dp))%mod;
        }
    }
    return dp[n]=ans%mod;
}

void solution(){
    int n ;
    cin>>n;
    vector<int> dp(n+1,-1);
           int ans = rec(n,dp);
           cout<<ans<<endl;
        }
int main() {
	// your code goes here
	// int t;
	// cin>>t;
	// while(t-->0){
	    solution();
	// }
}
