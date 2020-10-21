#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, c, d, n, m, x, y, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> x >> m;

        ans = 0, ck =0, y=x;
        for(i=0; i<m; i++)
        {
            cin >> c >> d;

            if(c==1 && d==n)
                ans = n;
            else
            {
                if((x>=c && x<=d) || (y>=c && y<=d))
                {
                    x = min(x, c);
                    y = max(y, d);
                }
            }
        }
        ans = max(ans, y-x+1);
        cout << ans << endl;

    }



    return 0;
}

