#include<bits/stdc++.h>
using namespace std;

int a[200005], b[200005], a_pos[200005], b_pos[200005], d[200005];

int main()
{
    int i, n, dif, ans = -1;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        a_pos[a[i]] = i;
    }

    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        b_pos[b[i]] = i;
    }


    for(i=1; i<=n; i++)
    {
        dif = a_pos[i] - b_pos[i];

        if(dif < 0)    dif+=n;
        d[dif] ++;

        ans = max(ans, d[dif]);
    }

    cout << ans << endl;

    return 0;
}

