#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1000000007;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int res = 1;
    if (b % 2 == 1)
        res = a;
    int num = power(a, b / 2);

    num = ((num % mod) * (num % mod)) % mod;

    num = ((num % mod) * (res % mod)) % mod;

    return num;
}
void solve()
{
    int n;cin >> n;
    int k;cin >> k;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(k, 0);
    for (int i = 0; i < n; i++)
    {
        dp[a[i] % k]++;
    }
    int sum = 1;
    if (dp[0] >= 1)
    {
        sum *= (dp[0] + 1);
    }

    for (int i = 1; i <= k / 2; i++)
    {
        if (k % 2 == 0 && i == k / 2)
        {
            if (dp[i] != 0)
                sum *= dp[i] + 1;
            sum = sum % mod;
            continue;
        }
        if (dp[i] == 0 && dp[k - i] == 0)
        {
            continue;
        }
        if (dp[i] == 0)
        {
            sum *= power(2, dp[k - i]);
            sum = sum % mod;
            continue;
        }
        if (dp[k - i] == 0)
        {
            sum *= power(2, dp[i]);
            sum = sum % mod;
            continue;
        }
        sum *= power(2, dp[i]) + power(2, dp[k - i]) - 1;
        sum = sum % mod;
    }
    cout << sum << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}