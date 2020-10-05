#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll  n, k, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        if(k>n)
            cout << k-n << endl;

        else if(k%2 == 0 && n%2 == 0)
            cout << 0 << endl;

        else if(k%2 == 1 && n%2 == 0)
            cout << 1 << endl;

        else if(k%2 == 0 && n%2 == 1)
            cout << 1 << endl;

        else if(k%2 == 1 && n%2 == 1)
            cout << 0 << endl;
    }

    return 0;
}


