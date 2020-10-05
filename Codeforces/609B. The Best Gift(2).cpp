#include <bits/stdc++.h>
using namespace std;

int a[200005], b[11];

int main()
{
    int i, j, n, m, count, ans = 0;

    cin >> n >> m;

    for(i=0; i<n; i++)  cin >> a[i], b[a[i]]++;

    for(i=1; i<=m; i++)
    {
        if(b[i] > 0)
        {
            count = 0;
            for(j=0; j<n; j++)
            {
                if(i < a[j])
                    count++;
            }
            ans = ans + count*b[i];
        }
    }

    cout << ans << endl;

    return 0;
}
