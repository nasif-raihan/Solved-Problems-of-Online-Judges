#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[55], b[55];

int main()
{
    ll i, n, t, ck, ans, da, db, mn, a_mn, b_mn;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];
        for(i=0; i<n; i++)  cin >> b[i];

        a_mn = *min_element(a, a+n);
        b_mn = *min_element(b, b+n);
        ans = 0;

        for(i=0; i<n; i++)
        {
            if(a[i]>a_mn && b[i]>b_mn)
            {
                da = a[i]-a_mn;
                db = b[i]-b_mn;
                mn = min(da, db);
                a[i] = a[i]-mn;
                b[i] = b[i]-mn;
                ans = ans + mn;
            }

            if(a[i]>a_mn)
                ans = ans + a[i]-a_mn;
            else if(b[i]>b_mn)
                ans = ans + b[i]-b_mn;
        }

        cout << ans << endl;
    }


    return 0;
}

