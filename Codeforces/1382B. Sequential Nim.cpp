#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005];

int main()
{
    ll i, n, t, ck, count;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0, count = 0;

        for(i=0; i<n; i++){
            cin >> a[i];

            if(a[i] == 1 && ck == 0)
                count++;
            else
                ck = 1;
        }

        if(ck)
        {
            if(count%2 == 0 && count != n)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else
        {
            if(count%2 == 0)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }

    return 0;
}
