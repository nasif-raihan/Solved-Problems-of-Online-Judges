#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[5005], b[5005];

int main()
{
    ll i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        set<ll>s;

        for(i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
            s.insert(a[i]);
        }

        sort(b, b+n);

        if(b[0] == b[n-1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            if(s.size() == n)
            {
                for(i=0; i<n-1; i++)
                    cout << 1 << " " << i+2 << endl;
            }
            else
            {
                for(i=1; i<n; i++)
                {
                    if(a[i] != a[0]){
                        cout << 1 << " " << i+1 << endl;
                        ck = i;
                    }
                }

                for(i=1; i<n; i++)
                {
                    if(a[i] == a[0])
                        cout << ck+1 << " " << i+1 << endl;
                }
            }
        }
    }

    return 0;
}
