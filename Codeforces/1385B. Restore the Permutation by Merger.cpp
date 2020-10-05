#include <bits/stdc++.h>
using namespace std;

int a[105];
bool b[105];

int main()
{
    int i, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n;

        memset(b, 0, n+1);

        for(i=0; i<2*n; i++)
            cin >> a[i];

        for(i=0; i<2*n; i++)
        {
            if(b[a[i]] == 0)
            {
                b[a[i]] = 1;
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

