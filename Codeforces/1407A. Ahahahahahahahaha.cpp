#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1005];

int main()
{
    ll i, n, t, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ans = 0;

        bool b[n+1];
        memset(b, 0, sizeof(b));

        for(i=0; i<n; i++)  cin >> a[i];

        for(i=0; i<n; i=i+2)
        {
            if(a[i] != a[i+1])
            {
                if(a[i] == 1)
                    b[i] = 1;
                else
                    b[i+1] = 1;

                ans++;
            }
        }

        cout << n-ans << endl;

        for(i=0; i<n; i++)
        {
            if(b[i] == 0)
                cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

