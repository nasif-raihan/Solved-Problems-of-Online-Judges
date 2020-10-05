#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005];

int main()
{
    ll i, n, t, mx, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        ans = 0, mx = a[0];

        for(i=0; i<n; i++)
        {
            a[i] = a[i] + ans;

            if(a[i] < mx)
                ans = ans + mx - a[i];
            else
                mx = a[i];
        }

        cout << ans << endl;
    }

    return 0;
}

