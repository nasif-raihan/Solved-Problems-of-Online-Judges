
#include <bits/stdc++.h>
using namespace std;

int q[100005], ans[100005];
bool b[100005];

int main()
{
    int i, j, k, n, t;

    cin >> t;

    while(t--)
    {
        cin >> n;

        memset(b, 0, n+1);

        bool flag = 0;

        j = 1;
        for(i=0; i<n; i++)
        {
            cin >> q[i];

            if(i==0 || (q[i] != q[i-1]))
            {
                ans[i] = q[i];
                b[q[i]] = 1;
            }
            else
            {
                int ck = 0;
                while(j<q[i])
                {
                    if(b[j] == 1)
                        j++;
                    else
                    {
                        b[j] = 1;
                        ans[i] = j;
                        j++;
                        ck = 1;
                        break;
                    }
                }

                if(ck == 0)
                    flag = 1;
            }
        }

        if(flag)
            cout << -1 << endl;
        else
        {
            for(i=0; i<n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
