#include <bits/stdc++.h>
using namespace std;

int w[55];

int main()
{
    int i, j, n, t, ans, count, tot_w;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)  cin >> w[i];

        sort(w, w+n);

        ans = 0;

        for(tot_w = 2; tot_w <= 2*n; tot_w++)
        {
            i = 0, j = n-1, count = 0;

            while(i < j)
            {
                if(w[i]+w[j] == tot_w)
                {
                    i++;
                    j--;
                    count++;
                    continue;
                }

                if(w[i]+w[j] < tot_w)
                {
                    i++;
                    continue;
                }

                if(w[i]+w[j] > tot_w)
                {
                    j--;
                    continue;
                }
            }

            ans = max(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}

