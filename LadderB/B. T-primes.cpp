// https://codeforces.com/problemset/problem/478/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
bool isInteger(double n){
    if(floor(n)==n)return true;
    return false;
}
void solve()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
    ll num;
    cin>>num;
    double rtnum = sqrt(num);
    if(!isInteger(rtnum)){
        cout<<"NO"<<endl;
        continue;
    }
    if(isPrime(rtnum)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
}
signed main()
{
    solve();
}