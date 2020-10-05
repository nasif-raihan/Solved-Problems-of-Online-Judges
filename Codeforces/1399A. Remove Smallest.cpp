#include <bits/stdc++.h>
using namespace std;

int a[55];

int main()
{
    int i, n, t, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        sort(a, a+n);

        ans = 1;

        for(i=1; i<n; i++)
            if(a[i]-a[i-1] > 1)
            {
                ans = 0;
                break;
            }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}

