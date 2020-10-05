#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1005], c[1005];

int main()
{
    ll i, j, k, n, t, ck, gcd;

    cin >> t;

    while(t--)
    {
        cin >> n;

        bool b[n+1];
        memset(b, 0, sizeof(b));

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a, a+n);

        ck = a[n-1], b[n-1] = 1;

        for(i=n-1; i>=0; i--)
        {
            if(i == n-1)
                cout << a[i] << " ";
            else
            {
                gcd = 0;
                for(j = n-2; j>=0; j--)
                {
                    if(b[j] == 0)
                    {
                        if(__gcd(ck, a[j]) >= gcd)
                        {
                            gcd = __gcd(ck, a[j]);
                            k = j;
                        }
                    }
                }

                b[k] = 1;
                ck = gcd;
                //cout << ck << endl;
                cout << a[k] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


