#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, mn, mx, ck, ans;

    cin >> n;

    int a[n+1];

    for(i=0; i<n; i++)  cin >> a[i];

    ans = 0;

    for(i=0; i<n; i++)
    {
        mn = mx = a[i], ck = 1;

        for(j=i+1; j<n; j++)
        {
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);

            if(mx-mn>1)
                break;

            ck++;
            ans = max(ans, ck);
        }

        if(ans == n-i)
            break;
    }

    cout << ans << endl;

    return 0;
}
