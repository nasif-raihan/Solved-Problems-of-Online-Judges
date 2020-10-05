#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005];

int main()
{
    ll i, n, v, T, ck, mx, ans;

    cin >> T;

    while(T--)
    {
        cin >> n;

        for(i=1; i<=n; i++)
            a[i] = 0;

        for(i=0; i<n; i++)
        {
            cin >> v;

            a[v]++;
        }

        mx = *max_element(a, a+n+1);

        ck = 0;
        for(i=1; i<=n; i++)
            if(mx == a[i])
                ck++;

        ans = n;
        n  =  n - ck;
        mx = mx - 1;

        while(mx>0)
        {
            ans = min(ans, (n/mx - 1));
            n  =  n - ck;
            mx = mx - 1;
        }

        cout << ans << endl;
    }

    return 0;
}

