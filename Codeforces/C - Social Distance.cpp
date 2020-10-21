#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, k, n, t, ans, prev;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> n >> k >> s;

        prev = 0, ans = 0;

        for(i=0; i<n; i++)
        {
            if(i==0 && s[i]=='0')
                ans++;

            else if(i!=0)
            {
                if(s[i] == '1')
                {
                    if(k >= (i-prev))
                        ans--;
                    prev = i;
                }
                else
                {
                    if(k < (i-prev))
                    {
                        ans++;
                        prev = i;
                    }
                }
            }
        }

        if(ans<0)   ans = 0;

        cout << ans << endl;
    }

    return 0;
}

