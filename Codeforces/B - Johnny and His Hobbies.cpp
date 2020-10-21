#include<bits/stdc++.h>
using namespace std;

int a[2000], b [2000];

int main()
{
    long long i, j, k, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        for(i=1; i<=1024; i++)
        {
            ck = 0;
            for(j=0; j<n; j++)
                b[j] = a[j] ^ i;

            sort(b, b+n);

            for(j=0; j<n; j++)
            {
                if(a[j] != b[j])
                {
                    ck = 1;
                    break;
                }
            }

            if(ck == 0)
                break;
        }

        if(ck == 0)    cout << i << endl;
        else    cout << -1 << endl;
    }

    return 0;
}


