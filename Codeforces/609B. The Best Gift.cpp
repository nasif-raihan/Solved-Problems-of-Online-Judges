#include <bits/stdc++.h>
using namespace std;

int a[11];

int main()
{
    int i, j, n, m, v, ans = 0;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> v;
        a[v]++;
    }

    for(i=1; i<=m; i++)
        for(j=i+1; j<=m; j++)
            ans = ans + a[i]*a[j];

    cout << ans << endl;

    return 0;
}

