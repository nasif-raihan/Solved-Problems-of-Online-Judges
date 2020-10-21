#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[55];

int main()
{
    ll i, n, t, r, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++){
            cin >> a[i];

            if(a[i] == 1)
                r = i;
        }

        ck = ans = 0;

        for(i=0; i<=r; i++)
        {
            if(ans == 0  && a[i] == 1)
                ck = 1;

            if(ck && a[i]==0)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
