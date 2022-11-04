#include <bits/stdc++.h>
#define int long long
using namespace std;



void helperfunction()
{
int n; cin>>n;
string a; cin>>a;
string b; cin>>b;
int sum=0;
for(int i=0;i<n;i++){
    int move=0;
    int diff = a[i]-b[i];
    if(a[i]>b[i]){
        move = 26-(diff);
        sum+=abs(move);
    }
    else{
        move = b[i]-a[i];
        sum+=abs(move);
    }
}
sum = min(abs(ans%26-26),ans%26);
cout<<sum<<endl;

}
signed main()
{

    int Test_case;
    cin >> Test_case;

    while (Test_case--)
        helperfunction();
}