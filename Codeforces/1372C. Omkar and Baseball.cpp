#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL a[200005];
bool b[200005];

int main()
{
    LL i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        memset(b, 0, n+1);

        ck = 0;
        for(i=1; i<=n; i++)
        {
            cin >> a[i];

            if(i != a[i])
                b[i] = 1, ck = 1;
        }

        if(ck == 0)
            cout << 0 << endl;
        else
        {
            int ck1 = 0;

            for(i=1; i<=n; i++)
            {
                if(b[i] == 1)
                {
                    if(ck1==0)
                        ck1++;
                    else if(ck1!=0 && b[i-1]==0)
                        ck1++;
                }
            }

            if(ck1 == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}


