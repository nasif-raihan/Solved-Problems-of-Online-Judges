#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;

int main()
{
    ll i, j, k, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> s;

        ll a[n+1];
        memset(a, 0, sizeof(a));

        for(i=0; i<n; i++)
        {
            k = 0;
            for(j=i; j<i+n; j++)
            {
                if(s[j] == '1')
                    a[k] = 1;

                k++;
            }
        }


        for(i=0; i<n; i++)
            cout << a[i];
        cout << endl;
    }

    return 0;
}

