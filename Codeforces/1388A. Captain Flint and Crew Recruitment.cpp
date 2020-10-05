#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, j, n, t, sq, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n<=30)
            cout << "NO" << endl;
        else if(n == 36 || n == 40 || n == 44)
            cout << "YES" << " " << "6 10 15 " << n-31 << endl;
        else
            cout << "YES" << " " << "6 10 14 " << n-30 << endl;
    }

    return 0;
}

