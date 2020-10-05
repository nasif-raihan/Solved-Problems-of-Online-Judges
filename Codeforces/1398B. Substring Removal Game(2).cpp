#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, j, n, t, ck, mx, one, ans, count, index;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();
        one = 0;

        for(i=0; i<n; i++){
            if(s[i] == '1')
                one++;
        }

        ck = ans = 0;
        while(one!=0)
        {
            n = s.size();
            j = mx = count = index = 0;

            for(i=0; i<n; i++)
            {
                if(s[i] == '1')
                    count++;
                else
                {
                    if(count>mx)
                    {
                        mx = count;
                        index = j;
                    }

                    j = i+1, count = 0;
                }
            }

            if(count>mx)
            {
                mx = count;
                index = j;
            }


            if(ck == 0)
                ans = ans + mx, ck = 1;
            else
                ck = 0;

            s.erase(index, mx);
            one = one - mx;
        }

        cout << ans << endl;
    }

    return 0;
}



