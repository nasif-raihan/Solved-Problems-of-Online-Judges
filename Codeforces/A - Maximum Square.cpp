#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k, ck, ans;

    cin >> k;

    while(k--)
    {
        cin >> n;

        int a[n+1];
        for(i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);

        ans = 0;
        for(i=1; i<=n; i++)
        {
            ck = 0;
            for(int j=0; j<n; j++)
            {
                if(a[j]>=i) ck++;
            }

            if(ck >= i)
                ans = max(i, ans);
        }

        cout << ans << endl;
    }

    return 0;
}



