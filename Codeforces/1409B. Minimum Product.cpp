#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, x, y;
    ll a, b, aa, bb;
    ll n, n1, n2, p1, p2;

    cin >> t;

    while(t--)
    {
        cin >> a >> b >> x >> y >> n;

        aa = a-x;
        bb = b-y;
        n1 = n2 = n;

        if(aa <= n1)
        {
            p1 = a - aa;
            n1 = n1 - aa;

            if(bb <= n1)
            {
                p1 *= b - bb;
                n1 = n1 - bb;
            }
            else
            {
                p1 *= b - n1;
                n1 = 0;
            }
        }
        else
        {
            p1 = a - n1;
            n1 = 0;

            p1 *= b;
        }

        if(bb <= n2)
        {
            p2 = b - bb;
            n2 = n2 - bb;

            if(aa <= n2)
            {
                p2 *= a - aa;
                n2 = n2 - aa;
            }
            else
            {
                p2 *= a - n2;
                n2 = 0;
            }
        }
        else
        {
            p2 = b - n2;
            n2 = 0;

            p2 *= a;
        }

        cout << min(p1, p2) << endl;
    }

    return 0;
}


