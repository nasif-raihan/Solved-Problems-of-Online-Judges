#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, t, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ll a[n+1];

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a, a+n);

        ans = a[n-1];

        ll low_2 = a[0]*a[1];
        ll low_4 = low_2*a[2]*a[3];
        ll hi_2  = a[n-2]*a[n-3];
        ll hi_4  = a[n-4]*a[n-5]*hi_2;

        ans = max({(ans*low_2*hi_2), (ans*low_4), (ans*hi_4)});

        cout << ans << endl;
    }

    return 0;
}

