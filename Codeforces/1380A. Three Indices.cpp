#include <bits/stdc++.h>
using namespace std;

long long a[1005];

int main()
{
    long long i, j, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
            cin >> a[i];

        ck = 0;

        for(i=0; i<n-2; i++)
        {
            for(j=n-1; j>i; j--)
            {
                if(j!=n-1 && a[i]<a[j] && a[j]>a[j+1])
                {
                    cout << "YES" << endl;
                    cout << i+1 << " " << j+1 << " " << j+2 << endl;
                    ck = 1;
                    break;
                }
            }
            if(ck)
                break;
        }

        if(ck == 0)
            cout << "NO" << endl;
    }

    return 0;
}


