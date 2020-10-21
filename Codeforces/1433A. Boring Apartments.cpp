#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0;
        while(n!=0)
        {
            if(!ck)
                ans = n%10;

            n = n/10;
            ck++;
        }

        ans = (ans-1)*10 + (ck * (ck+1))/2;

        cout << ans << endl;
    }

    return 0;
}
