#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        int a[n+1];

        for(i=0; i<n; i++)
            cin >> a[i];

        ans = 0;

        for(i=0; i<n; i++)
        {
            if(i==0 && a[i] == 1)
            {
                ans++;
                a[i] = 0;
            }
            else if(a[i])
            {
                if(!a[i-1])
                    continue;

                if(a[i-1] && a[i-2])
                {
                    ans++;
                    a[i] = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
