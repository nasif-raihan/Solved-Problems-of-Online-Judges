#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main()
{
    int i, n, r, p, pos, ans, last;

    cin >> n >> r;

    for(i=1; i<=n; i++)
        cin >> a[i];

    last = 0, ans = 0, pos = 0;

    /// last = pos + r - 1
    /// pos = last - r + 1

    while(last < n)
    {
        for(i=n; i>pos; i--)
        {
            p = 0;

            if(a[i] == 1 && (i-r)<= last)
            {
                p = i;
                break;
            }
        }
        if(!p)
        {
            cout << -1 << endl;
            return 0;
        }

        ans++;
        last = p + r - 1;
        pos = p;
    }

    cout << ans << endl;

    return 0;
}

