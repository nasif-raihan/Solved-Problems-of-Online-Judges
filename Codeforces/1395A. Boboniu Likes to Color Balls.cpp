#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[4];

int main()
{
    ll i, t, odd, even;

    cin >> t;

    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        if(a[0] == a[1] && a[0] == a[2] && a[0] == a[3])
            cout << "YES" << endl;
        else
        {
            even = odd = 0;

            sort(a, a+3);

            for(i=0; i<4; i++)
            {
                if(a[i]%2 == 0) even++;
                else            odd++;
            }

            if(even >= 3)
                cout << "YES" << endl;
            else if(odd > 3)
                cout << "YES" << endl;
            else if(odd == 3 && a[0]!=0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
