#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ans = 1;
        for(i=1; i<=n; i++)
        {
            if(i*2 <= n)
                ans = max(ans, i);
        }

        cout << ans << endl;
    }

    return 0;
}


