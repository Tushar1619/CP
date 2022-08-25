#include <bits/stdc++.h>
#define int long long
using namespace std;



void helperfunction()
{
int num;
    cin >> num;

    int numarr[num+1], count0, count1, tc;
    count0 = 0;
    count1 = 0;
    tc = 0;


    for (int i = 1; i <= num; ++i)
    {
        cin >> numarr[i];

        count0 += numarr[i] == 0;

        count1 += numarr[i] == 1;

    }

    for (int i = 1; i <= num; ++i)
    {
        if (i == 1)
        {

            tc += (numarr[1] == numarr[num]);
        }


        else{

            tc += numarr[i] == numarr[i - 1];
        }
    }
    tc -= abs(count0 - count1);
    if (tc % 4 == 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
}
signed main()
{

    int Test_case;
    cin >> Test_case;

    while (Test_case--)
        helperfunction();
}