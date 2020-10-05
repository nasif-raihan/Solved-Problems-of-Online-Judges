#include <bits/stdc++.h>
using namespace std;

long long a[35], b[55];

int main()
{
    int i, j, n, k, t, ck, rem;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        memset(b, 0, sizeof(b));
        ck = 0;

        for(i=0; i<n; i++)
        {
            cin >> a[i];

            j = 0;
            while(a[i]>0)
            {
                rem = a[i]%k;
                a[i] = a[i]/k;
                b[j] = b[j] + rem;

                if(b[j]>1)
                    ck = 1;

                j++;
            }
        }

        if(ck)  cout << "NO" << endl;
        else    cout << "YES" << endl;
    }

    return 0;
}

