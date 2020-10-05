#include <bits/stdc++.h>
using namespace std;

int a[200005];

int main()
{
    int i, k, n, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> a[i];

        int ck1 = 0, ck2 = 0;
        for(i=n-1; i>=0; i--)
        {
            if(i != n-1)
            {
                if(a[i] < a[i+1])
                    ck1 = 1;

                else if(a[i] > a[i+1])
                    ck2 = 1;

                if(ck1==1 && ck2==1)
                {
                    k = i+1;
                    break;
                }
            }

            k = i;
        }

        i = 0, ans = 0;
        while(i!=k+1)
        {
            ck = 0;
            if(i!=0 && a[i] < a[i-1])
                ck = 1;

            if(ck == 1)
                ans = i;

            i++;
        }

        cout << ans << endl;
    }

    return 0;
}

