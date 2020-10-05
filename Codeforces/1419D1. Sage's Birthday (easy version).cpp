#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, j, n;

    cin >> n;

    ll a[n+1], ans[n+1];

    for(i=0; i<n; i++)  cin >> a[i];

    sort(a, a+n);

    j = 1;
    for(i=0; i<n; i+=2)
    {
        if(j>=n) j--;

        ans[i] = a[j];

        j += 2;
    }

    j = 0;
    for(i=1; i<n; i+=2)
    {
        ans[i] = a[j];
        j += 2;
    }

    if(!(n%2)) cout << n/2-1 << endl;
    else     cout << n/2 << endl;

    for(i=0; i<n; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
