#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, ck, mx, div;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0;
        while(n!=1)
        {
            if(n%2 == 1)
            {
                ck++;
                break;
            }
            else
            {
                div = sqrt(n);
                mx = 0;

                for(i=3; i<=div; i++)
                {
                    if(n%i == 0)
                    {
                        if(i%2 == 1)
                        {
                            if((n/i)%2 == 0)
                                mx = max(mx, i);
                        }

                        if((n/i)%2 == 1)
                        {
                            if(i%2 == 0)
                                mx = max(mx, n/i);
                        }
                    }
                }

                if(mx == 0 || (n%mx==0 && n/mx==2))
                    n = n-1;
                else
                    n = n/mx;

                ck++;
            }
        }

        if(ck%2==0)     cout << "FastestFinger" << endl;
        else            cout << "Ashishgup" << endl;
    }

    return 0;
}


