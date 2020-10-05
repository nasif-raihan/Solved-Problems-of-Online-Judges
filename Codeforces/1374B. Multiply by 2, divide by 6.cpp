#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0;

        while(n!=1)
        {
            if(n%6==0)
                n = n/6;
            else if(n%3 == 0)
                n = n*2;
            else
                break;

            ck++;
        }

        if(n==1)
            cout << ck << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}


