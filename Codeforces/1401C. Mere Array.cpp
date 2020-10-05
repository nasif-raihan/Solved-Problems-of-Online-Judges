#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005], b[100005];

int main()
{
    ll i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
        {
            cin >> a[i];

            b[i] = a[i];
        }

        sort(b, b+n);

        ck = 0;

        for(i=0; i<n; i++)
        {
            if(a[i] != b[i])
            {
                if(a[i]%b[0] != 0)
                {
                    ck = 1;
                    break;
                }
            }
        }


        if(ck)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}


