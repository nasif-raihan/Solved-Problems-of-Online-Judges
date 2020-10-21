#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[300005];

int main()
{
    ll i, n, t, mx, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
            cin >> a[i];

        for(i=0; i<n; i++)
        {
            if(i==0){
                mx = a[i];

                if(a[i+1]<mx)
                    ans = i+1;
            }
            else if(a[i]>=mx)
            {
                mx = a[i];

                if((i+1<n && a[i+1]<mx) || a[i-1]<mx)
                    ans = i+1;
            }
        }

        sort(a, a+n);

        if(a[n-1] == a[0])
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
