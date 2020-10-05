#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll i, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=n; i>=1; i--)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

