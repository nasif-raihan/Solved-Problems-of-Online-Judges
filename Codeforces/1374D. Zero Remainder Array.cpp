#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    LL i, k, n, t, x, ans, cur;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        map <LL, LL> mp;

        ans = 0;
        for(i=0; i<n; i++)
        {
            cin >> x;

            x = x%k;

            if(x==0)
                continue;

            x = k-x;
            cur = mp[x];
            mp[x]++;

            ans = max(ans, (x +(k*cur)+ 1));
        }

        cout << ans << endl;
    }

    return 0;
}

