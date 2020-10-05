#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005];

int main()
{
    ll i, n, k, t, mx;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        for(i=0; i<n; i++)
            cin >> a[i];

        if(k%2 == 1)
            k = 1;
        else
            k = 2;

        while(k--)
        {
            mx = *max_element(a, a+n);

            for(i=0; i<n; i++)
                a[i] = mx - a[i];
        }

        for(i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}


