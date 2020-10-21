#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, ans, high, low;

    low = high = 1;

    cin >> n;

    for(i=1; i<=n; i++)
        high*=i;

    for(i=1; i<=n/2; i++)
        low*=i;

    ans = ((high/low)/low)/2;

    n = ans - n - 1;

    for(i=1; i<=n; i++)
        ans*=i;

    cout << ans << endl;

    return 0;
}
