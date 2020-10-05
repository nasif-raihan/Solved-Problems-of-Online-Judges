#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, ans, diff, pos, prev;

    cin >> n;

    int a[n+1];

    for(i=0; i<n; i++)  cin >> a[i];

    j = ans = pos = prev = 0;

    for(i=1; i<n; i++)
    {
        diff = a[i] - a[i-1];

        if(diff!=0)
        {
            if(diff == prev)
                j = pos + 1;

            pos = i-1;
            prev = diff;
        }

        ans = max(ans, i-j+1);
    }

    cout << ans << endl;

    return 0;
}
