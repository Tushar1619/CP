#include <bits/stdc++.h>

using namespace std;

int minimumElements(vector<int>& arr, int T){
    int n = arr.size();
     vector<vector<int>> dp(n,vector<int>(T+1,0));
    for(int col=0;col<T+1;col++){
        if(col%arr[0]==0)dp[0][col]=col/arr[0];
        else dp[0][col]=1e9;
        
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<T+1;j++){
            int not_take = 0+dp[i-1][j];
            int take = 1e9;
            if(j>=arr[i]){
                take = 1+dp[i][j-arr[i]];
            }
            dp[i][j]=min(not_take,take);
        }
    }
    return dp[n-1][T];

}

int main() {
int n;int tar;
cin>>n;
cin>>tar;
  vector<int> arr(n);
 
  for(int i=0;i<n;i++)cin>>arr[i];
  
    int ans = minimumElements(arr,tar);
    if(ans>=1e9)ans = -1;
    
  cout<<ans<<endl;
}