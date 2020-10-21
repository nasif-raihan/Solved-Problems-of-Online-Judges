#include<bits/stdc++.h>
using namespace std;

long long a[50];
bool b[50];

int main()
{
    long long i, n, t, ck1, ck2;

    cin >> t;

    while(t--)
    {
        cin >> n;

        memset(b, 0, sizeof(b));

        ck1 = 0, ck2 = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];

            if(a[i]%2 == i%2)
                b[i] = 1;
            else
            {
                if(a[i]%2==0)
                    ck1++;
                else
                    ck2++;
            }
        }

        if(ck1 == ck2)  cout << ck1 << endl;
        else            cout << -1 << endl;
    }

    return 0;
}

