#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr1[200001];
    int arr2[200001];

    for (int i = 1; i <= n; ++i){
        cin >> arr1[i];

    }
    int ans = 0;
    if (n == 1)
    {
        puts("1");
        return;
    }
    
    for (int i = 2; i <= n; ++i)
        arr2[i] = arr1[i] < arr1[i - 1];
    vector<bool> hlpr;
    vector<int> freq;
    hlpr.push_back(arr2[2]);
    freq.push_back(1);
    for (int i = 3; i <= n; ++i)
    {
        if (arr2[i] == hlpr[hlpr.size() - 1])
        {
            freq[hlpr.size() - 1]++;
        }
        else
        {
            hlpr.push_back(arr2[i]);
            freq.push_back(1);
        }
    }
    hlpr.push_back(0);freq.push_back(0);
    
    for (int i = 0; i < hlpr.size() - 1; ++i){
        ans += freq[i] * (freq[i] + 1) / 2;
    }
        
    for (int i = 0; i < hlpr.size() - 1; ++i){
            if (hlpr[i] == true){
            ans += freq[i] * freq[i + 1];
            }
    }
    ans+=n;
    cout << ans<< endl;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}