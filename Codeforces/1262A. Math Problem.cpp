#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, l, r, mx_l, mn_r;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
        {
            cin >> l >> r;

            if(i != 0)
            {
                mx_l = max(mx_l, l);
                mn_r = min(mn_r, r);
            }
            else
                mx_l = l, mn_r = r;
        }

        if(mx_l <= mn_r)
            cout << 0 << endl;
        else
            cout << mx_l - mn_r << endl;
    }

    return 0;
}

