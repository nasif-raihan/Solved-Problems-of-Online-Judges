#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1005], b[1005];
bool c[1005];

int main()
{
    ll i, n, m, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        memset(c, 0, 1005);

        for(i=0; i<n; i++){
            cin >> a[i];
            c[a[i]] = 1;
        }

        ans = 0, ck = 0;
        for(i=0; i<m; i++){
            cin >> b[i];

            if(c[b[i]] == 1 && ck == 0)
            {
                ck = 1;
                ans = b[i];
            }
        }

        if(ck==1)
            cout << "YES" << endl << ck << " " << ans << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

