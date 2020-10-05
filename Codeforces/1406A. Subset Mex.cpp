#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[105];

int main()
{
    ll i, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ll b[101];
        memset(b, 0, sizeof(b));

        for(i=0; i<n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }

        ck = ans = 0;

        for(i=0; i<=100; i++)
        {
            if(b[i] == 0)
            {
                if(ck == 0)
                    ans = 2*i;
                else if(ck == 1)
                    ans = ans + i;

                ck = 2;
                break;
            }
            else if(b[i] == 1 && ck == 0)
            {
                ans += i;
                ck++;
            }
        }


        if(ck == 0)
            ans = 2*i;
        else if(ck == 1)
            ans = ans + i;

        cout << ans << endl;
    }

    return 0;
}
