#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll c, v, n, m, T;

    cin >> T;

    while(T--)
    {
        cin >> v >> c >> n >> m;

        if(v+c < n+m || min(v,c)<m)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}

