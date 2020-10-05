#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, j, n, x, y, t, ck, ans, dif;

    cin >> t;

    while(t--)
    {
        cin >> n >> x >> y;

        ck  = 0;
        dif = y-x;

        for(i=1; i<=dif; i++)
        {
            if(dif%i == 0)
            {
                for(j=1; j<n; j++)
                {
                    if(y-i*j == x)
                    {
                        ck = i;
                        break;
                    }
                }
            }

            if(ck)
                break;
        }

        ans = y, i = 1, n--;

        while(1)
        {
            if(i == 1)
                cout << y << " ";

            if(ans - ck*i > 0)
            {
                cout << ans - ck*i << " ";
                n--;

                if(!n)
                    break;
            }
            else
                break;
            i++;
        }

        i = 1;
        while(n>0)
        {
            cout << y + ck*i << " ";
            i++, n--;
        }

        cout << endl;
    }

    return 0;
}


