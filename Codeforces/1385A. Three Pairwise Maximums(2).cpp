#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y, z;

    cin >> t;

    while(t--)
    {
        cin >> x >> y >> z;

        if(x == y && x == z)
            cout << "YES" << endl << x << " " << y << " " << z << endl;
        else if(x == y && x>z)
            cout << "YES" << endl << x << " " << z << " " << z << endl;

        else if(y == z && y>x)
            cout << "YES" << endl << y << " " << x << " " << x << endl;

        else if(x == z && x>y)
            cout << "YES" << endl << x << " " << y << " " << y << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}

