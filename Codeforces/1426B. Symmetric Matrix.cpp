#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m, a, b, c, d, ck, T;

    cin >> T;

    while(T--)
    {
        cin >> n >> m;

        ck = 0;

        for(i=0; i<n; i++){
            cin >> a >> b >> c >> d;

            if(b == c)
                ck = 1;
        }

        if(m%2)
            cout << "NO" << endl;
        else if(ck)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

