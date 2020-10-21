#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, k, t, sum;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        ll a[n];

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a, a+n);

        for(i=n-k-1; i<n-1; i++)
            a[n-1] += a[i];

        cout << a[n-1] << endl;
    }

    return 0;
}
