#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n%2==1)
            cout << n/2+1 << endl;
        else
            cout << n/2 << endl;
    }

    return 0;
}

