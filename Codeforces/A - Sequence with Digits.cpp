#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, k, n, t, ck, mn, mx, rem, res, div;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        res = n;

        i=0;
        while(k--)
        {
            if(i!=0)
            {
                mn = 10, mx = -1, res = n;

                while(res!=0)
                {
                    rem = res%10;
                    res = res/10;
                    mn = min(mn, rem);
                    mx = max(mx, rem);
                }
                n = n + mn * mx;

                if(mn == 0)
                {
                    ck = 1;
                    break;
                }
            }
            i++;
        }

        cout << n << endl;
    }


    return 0;
}

