#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[55];
string s = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", t;
int main()
{
    ll i, n, t, mx, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
            cin >> a[i];
        mx = *max_element(a, a+n);
        string t(s, 0, mx+5);

        for(i=0; i<=n; i++)
        {
            if(i==0)
                cout << t << endl;
            else
            {
                if(t[a[i-1]] < 'z')
                    t[a[i-1]] = t[a[i-1]] + 1;
                else
                    t[a[i-1]] = t[a[i-1]] - 1;

                cout << t << endl;
            }
        }
    }

    return 0;
}

