#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

int close_prime(int n,vector<int>& allPrimes){
    int l = 0;
    int r = allPrimes.size()-1;
    int pot = 1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(allPrimes[mid]>n){
            pot=allPrimes[mid];
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    // cout<<n<<" "<<pot<<endl;
    return pot;
}
void helperfunction()
{
vector<int> allPrimes;
for(int i=1;i<100005;i++){
    if(isPrime(i)){
        allPrimes.push_back(i);
    }
}
int n; cin>>n;
int m; cin>>m;
vector<vector<int>> arr(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         cin>>arr[i][j];
    }
}
int ans = INT_MAX;
for(int i=0;i<n;i++){
    int res=0;
    for(int j=0;j<m;j++){
        if(isPrime(arr[i][j])==false){
            int call = close_prime(arr[i][j],allPrimes);
            res+=call-arr[i][j];
        }
    }
    ans=min(ans,res);
}

for(int i=0;i<m;i++){
    int res=0;
    for(int j=0;j<n;j++){
        if(isPrime(arr[j][i])==false){
            int call = close_prime(arr[j][i],allPrimes);
            res+=call-arr[j][i];
        }
    }
    ans=min(ans,res);
}
cout<<ans<<endl;
}
signed main()
{

    int Test_case=1;

    while (Test_case--)
        helperfunction();
}