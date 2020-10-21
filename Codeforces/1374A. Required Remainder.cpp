#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, x, y, t;

    cin >> t;

    while(t--)
    {
        cin >> x >> y >> n;

        long long mod = n%x;

        if(mod==y)
            cout << n << endl;
        else if(mod>y)
            cout << n - abs(mod-y) << endl;
        else
            cout << (n/x)*x-(x-y) << endl;

    }

    return 0;
}

