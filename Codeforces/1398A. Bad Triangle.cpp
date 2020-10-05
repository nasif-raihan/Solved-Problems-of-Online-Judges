
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[50005];

int main()
{
    ll i, n, t, ii, jj, kk, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        ck = ii = 0, kk = n-1;

        for(i=1; i<n-1; i++)
            if(a[i]+a[ii]<=a[kk])
            {
                jj = i;
                ck = 1;
                break;
            }

        if(ck)
            cout << ii+1 << " " << jj+1 << " " << kk+1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}

