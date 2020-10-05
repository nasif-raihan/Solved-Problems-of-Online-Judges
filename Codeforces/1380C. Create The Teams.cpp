#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005];

int main()
{
    ll i, n, t, x, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> x;

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a,a+n);
        reverse(a, a+n);

        ans = 0, ck = 1;
        for(i=0; i<n; i++)
        {
            if(a[i]*ck>=x)
            {
                ans++;
                ck = 0;
            }
            ck++;
        }
        cout << ans << endl;
    }

    return 0;
}

