#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, l, r, x, y, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> l >> r;

        if(r%l == 0)
            cout << l << " " << r << endl;
        else if(l*2 > r)
            cout << -1 << " " << -1 << endl;
        else
            cout << l << " " << l*2 << endl;
    }

    return 0;
}

