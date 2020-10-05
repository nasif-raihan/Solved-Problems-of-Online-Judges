#include <bits/stdc++.h>
#define ll long long

using namespace std;



int main()
{
    ll i, j, n, m, t, ck, ans;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        ans = 0;

        for(i=0; i<n; i++)
        {
            cin >> s;

            if(i != n-1)
            {
                if(s[m-1] == 'R')
                    ans++;
            }
            else
            {
                for(j=0; j<m-1; j++)
                    if(s[j] == 'D')
                        ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

