#include <bits/stdc++.h>
#define ll long long
#define MX 200005
using namespace std;

ll diff[MX], admissible[MX];

int main()
{
    ll i, n, k, q, l, r, v = 0, mn = MX, mx = -1;

    cin >> n >> k >> q;

    for(i=1; i<=n; i++)
    {
        cin >> l >> r;

        mn = min(mn, l);
        mx = max(mx, r);

        diff[l] = diff[l] + 1;
        diff[r+1] = diff[r+1] - 1;
    }

    for(i=mn; i<=mx; i++)
        diff[i] = diff[i-1] + diff[i];

    for(i=mn; i<MX; i++)
    {
        if(i<=mx && diff[i] >= k)
            admissible[i] = admissible[i-1] + 1;

        else
            admissible[i] = admissible[i-1];
    }

    for(i=0; i<q; i++)
    {
        cin >> l >> r;

        cout << admissible[r] - admissible[l-1] << endl;
    }

    return 0;
}

