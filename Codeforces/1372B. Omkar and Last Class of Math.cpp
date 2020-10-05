#include <bits/stdc++.h>
#define LL long long
using namespace std;


int main()
{
    LL i, n, t, sq, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        sq = sqrt(n);

        ck = 0;
        for(i=2; i<=sq; i++)
        {
            if(n%i==0)
            {
                ck = 1;
                break;
            }
        }

        if(ck == 0)
            cout << 1 << " " << n-1 << endl;
        else
            cout << n/i << " " << n-n/i << endl;
    }

    return 0;
}

