// https://codeforces.com/problemset/problem/478/B 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int addSum(int x){
    int sum=0;
    while(x!=0){
        sum+=x;
        x--;
    }
    return sum;
}
int function_min(int n,int m){
    int ans = 0;
    while(n!=0){
        int val = n/m;
        if(n%m!=0) val++;
        ans+=addSum(val-1);
        m--;
        n-=val;
    }
    return ans;
}
int function_max(int n,int m){
    return addSum( (n-(m-1))-1);
}

void solve()
{
  int n,m;
  cin>>n>>m;
  int kmin = function_min(n,m);
  int kmax = function_max(n,m);
  cout<<kmin<<endl;
  cout<<kmax<<endl;
}
signed main()
{
    solve();
}