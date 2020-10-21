#include<bits/stdc++.h>
using namespace std;

int a[50];

int main()
{
    int i, n, t, ck1, ck2;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck1 = 0, ck2 = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];

            if(a[i]%2 != i%2)
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


