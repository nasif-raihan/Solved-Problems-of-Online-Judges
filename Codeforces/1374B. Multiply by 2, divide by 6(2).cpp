#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, m, t, ck, div;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0, m = 0;

        while(n!=1)
        {
            if(n%6==0)
            {
                n = n/6;
                m = 0;
            }
            else
            {
                n = n*2;
                m++;

                if(m==10)
                    break;
            }
            ck++;
        }

        if(n==1)
            cout << ck << endl;
        else
            cout << -1 << endl;
    }



    return 0;
}

