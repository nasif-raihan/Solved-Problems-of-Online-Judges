#include <bits/stdc++.h>
using namespace std;

int a[300005];

int main()
{
    int i, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        if(a[0] < a[n-1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

