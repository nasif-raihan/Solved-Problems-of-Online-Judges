
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        if(n%2==0)
            n = n + k*2;
        else
        {
            for(i=3; i <= n; i+=2)
            {
                if(n%i == 0)
                {
                    n = n + i;
                    k--;
                    break;
                }
            }

            n = n + k*2;
        }

        cout << n << endl;
    }

    return 0;
}
