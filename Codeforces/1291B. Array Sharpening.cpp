#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[300005];

int main()
{
    ll i, n, t, v, ck, increase;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=1; i<=n; i++)  cin >> a[i];

        ck = increase = 0;

        for(i=1; i<=n; i++)
        {
            if(increase == 0)
                v = i-1;

            if(v <= a[i])
                continue;
            else
            {
                increase = 1;
                v = n-i;

                if(v <= a[i] && v != a[i-1])
                    continue;
                else
                {
                    ck = 1;
                    break;
                }
            }
        }

        if(ck)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}


