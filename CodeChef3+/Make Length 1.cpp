#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int ocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.charAt(i) == '0'){
            if (ocount % 2 == 0)
            {
                ocount = 0;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
            
        else
        {
            ocount++;
        }
    }
    if (ocount % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}