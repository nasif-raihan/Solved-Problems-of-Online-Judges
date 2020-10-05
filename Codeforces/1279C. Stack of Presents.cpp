#include <bits/stdc++.h>
using namespace std;

int a[100005], b[100005], pos[100005];

int main()
{
    int i, n, m, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        for(i=0; i<n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }

        long long dis = 0, ans = 0, ck = 0;

        for(i=0; i<m; i++)
        {
            cin >> b[i];

            if(pos[b[i]]>dis)
            {
                ans = ans + 2*(pos[b[i]] - ck) + 1;
                dis = pos[b[i]];
            }
            else
                ans++;

            ck++;
        }

        cout << ans << endl;
    }

    return 0;
}

