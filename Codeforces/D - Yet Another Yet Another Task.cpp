#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
    int i, j, n, mx, sum, ans;

    cin >> n;

    for(i=0; i<n; i++)
        cin >> a[i];

    mx = *max_element(a, a+n);

    if(mx <= 0)
        cout << 0 << endl;
    else
    {
        ans = 0;
        for(i=1; i<=mx; i++)
        {
            sum = 0;
            for(j=0; j<n; j++)
            {
                if(a[j] > i)
                {
                    sum = 0;
                    continue;
                }

                sum = sum + a[j];

                if(sum < 0)
                    sum = 0;

                ans = max(ans, sum-i);
            }
        }

        cout << ans << endl;
    }


    return 0;
}

