#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[55];

int main()
{
    ll i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a, a+n);
        ck = 0;

        for(i=1; i<n; i++)
        {
            if(abs(a[i]-a[i-1])>1)
            {
                ck = 1;
                break;
            }
        }

        if(ck)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
