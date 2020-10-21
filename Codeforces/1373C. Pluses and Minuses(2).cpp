#include <bits/stdc++.h>
using namespace std;

long long a[1000005];

int main()
{
    long long i, n, t, res, cur;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();
        memset(a, 0, n);
        res = 0, cur = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] == '-')
            {
                if(cur < 0)
                    a[i] = i + 1;
                else
                    a[i] = 1;

                cur -= 1;
            }

            if(s[i] == '+')
            {
                if(cur < 0){
                    a[i] = i + 1;
                    cur = 1;
                }
                else{
                    a[i] = 1;
                    cur += 1;
                }
            }
        }

        if(cur < 0) res += n;

        for(i=0; i<n; i++)
            res += a[i];

        cout << res << endl;
    }

    return 0;
}

