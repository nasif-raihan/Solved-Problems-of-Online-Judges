#include <bits/stdc++.h>
#define ll long long
#define MX 100005
using namespace std;

ll a[MX], l[MX], r[MX], d[MX], diff[MX], operation[MX];

int main()
{
    ll i, j, n, m, k, x, y;

    cin >> n >> m >> k;

    for(i=1; i<=n; i++)  cin >> a[i];

    for(i=1; i<=m; i++)
        cin >> l[i] >> r[i] >> d[i];

    for(i=0; i<k; i++)
    {
        cin >> x >> y;

        operation[x]++;
        operation[y+1]--;
    }

    for(i=1; i<=m; i++)
        operation[i] = operation[i] + operation[i-1];

    for(i=1; i<=m; i++)
    {
        diff[l[i]] = diff[l[i]] + operation[i]*d[i];
        diff[r[i]+1] = diff[r[i]+1] - operation[i]*d[i];
    }

    for(i=2; i<=n; i++)
        diff[i] = diff[i] + diff[i-1];

    for(i=1; i<=n; i++)
        a[i] = a[i] + diff[i];

    for(i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

