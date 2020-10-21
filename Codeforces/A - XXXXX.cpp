
#include<bits/stdc++.h>
using namespace std;

long long a[100005];

int main()
{
    long long i, n, x, t, ck, ans, sum;

    cin >> t;

    while(t--)
    {
        cin >> n >> x;

        sum = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if(sum%x != 0)
            cout << n << endl;
        else
        {
            ck = 0, ans = 0;
            for(i=0; i<n; i++)
                if(a[i]%x != 0)
                {
                    ck++;
                    break;
                }

            if(ck == 1)
                ans = i+1;

            ck = 0;
            for(i=n-1; i>=0; i--)
                if(a[i]%x != 0)
                    break;

            if(ans>0)
                ans = min(ans, n-i);

            if(ans==0)   cout << -1 << endl;
            else    cout << n-ans << endl;
        }
    }

    return 0;
}
