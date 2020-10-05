#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int i, j, n, t, l, r, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> s;

        j = 0;
        for(i=1; i<n; i++)
        {
            if(s[i] != s[i-1])
            {
                j = i;
                break;
            }
        }

        if(j == 0)
        {
            cout << ceil(n/3.0) << endl;
            continue;
        }

        rotate(s.begin(), s.begin()+j, s.end());

        l = r = ans = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] == 'L')
            {
                l++, r = 0;

                if(l == 3)
                    ans++, l = 0;
            }
            else
            {
                r++, l = 0;

                if(r == 3)
                    ans++, r = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

