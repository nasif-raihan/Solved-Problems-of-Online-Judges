#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, x1, x2, y1, y2, ans;

    cin >> t;

    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        ans = abs(x1-x2) + abs(y1-y2);

        if(ans == 0)
            cout << 0 << endl;
        else if(ans == 1)
            cout << 1 << endl;
        else if(abs(x1-x2)>=1 && abs(y1-y2)>=1)
            cout << ans + 2 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
