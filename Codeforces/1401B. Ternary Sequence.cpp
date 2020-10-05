#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll  t, ck, ans;
    ll ax, ay, az;
    ll bx, by, bz;

    cin >> t;

    while(t--)
    {
        cin >> ax >> ay >> az;
        cin >> bx >> by >> bz;

        ans = 0;

        if(az!=0 && by!=0)
        {
            ck = min(az, by);
            ans = ans + 2*ck;
            az -= ck;
            by -= ck;
        }

        if(az!=0 && bz!=0)
        {
            ck = min(az, bz);
            az -= ck;
            bz -= ck;
        }

        if(ay!=0 && by!=0)
        {
            ck = min(az, by);
            ay -= ck;
            by -= ck;
        }

        if(bz!=0 && ax!=0)
        {
            ck = min(ax, bz);
            ax -= ck;
            bz -= ck;
        }

        if(ay!=0 && bz!=0)
        {
            ck = min(ay, bz);
            ans = ans - 2*ck;
            ay -= ck;
            bz -= ck;
        }

        cout << ans << endl;
    }

    return 0;
}

