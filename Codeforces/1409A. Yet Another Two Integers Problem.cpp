#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        ck = abs(b-a);
        ans = 0;

        if(ck>=10)
        {
            ans = ck/10;
            ck = ck%10;
        }

        if(ck>0)
            ans += 1;

        cout << ans << endl;
    }

    return 0;
}
