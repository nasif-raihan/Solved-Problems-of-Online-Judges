#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, a, b, c, t, x, y;

    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c;

        x = y = -1;

        if(a < c)   x = 1;
        if(a*b > c) y = b;

        cout << x << " " << y << endl;
    }

    return 0;
}

