#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1005];

int main()
{
    ll i, n, k, T, ck, ans;

    cin >> T;

    while(T--)
    {
        cin >> n >> k;

        for(i=0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        ans = 0;

        for(i=1; i<n; i++)
            ans += (k-a[i])/a[0];

        cout << ans << endl;
    }

    return 0;
}
