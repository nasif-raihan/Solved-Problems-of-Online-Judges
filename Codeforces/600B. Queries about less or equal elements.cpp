#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005], b[200005], c[200005];
map <ll, ll> ans;

int main()
{
    ll i, j, n, m;

    cin >> n >> m;

    for(i=0; i<n; i++)  cin >> a[i];
    for(i=0; i<m; i++)  cin >> b[i], c[i] = b[i];

    sort(a, a+n);
    sort(b, b+m);

    j = 0;
    for(i=0; i<m; i++)
    {
        while(a[j]<=b[i] && j<n)
            j++;

        ans[b[i]] = j;
    }

    for(i=0; i<m; i++)
        cout << ans[c[i]] << " ";
    cout << endl;

    return 0;
}

