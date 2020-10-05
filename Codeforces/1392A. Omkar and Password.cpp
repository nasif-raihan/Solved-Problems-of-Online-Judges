#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005];

int main()
{
    ll i, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0;

        for(i=0; i<n; i++)
        {
            cin >> a[i];

            if(i!=0 && a[i] != a[0])
                ck = 1;
        }

        if(ck)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}


