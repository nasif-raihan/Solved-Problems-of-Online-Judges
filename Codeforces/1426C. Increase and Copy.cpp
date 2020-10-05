#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, T, sq, ans;

    cin >> T;

    while(T--)
    {
        cin >> n;

        sq = sqrt(n);

        if((n-sq*sq) == 0)
            cout << 2*sq-2 << endl;
        else if((n-sq*sq) <= sq)
            cout << 2*sq-1 << endl;
        else
            cout << 2*sq << endl;
    }

    return 0;
}
