
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[10];

int main()
{
    ll i, n, t, ans;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();
        memset(a, 0, sizeof(a));
        ans = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] == '0') a[0]++;
            if(s[i] == '1') a[1]++;
            if(s[i] == '2') a[2]++;
            if(s[i] == '3') a[3]++;
            if(s[i] == '4') a[4]++;
            if(s[i] == '5') a[5]++;
            if(s[i] == '6') a[6]++;
            if(s[i] == '7') a[7]++;
            if(s[i] == '8') a[8]++;
            if(s[i] == '9') a[9]++;
        }

        int mx = 0;
        for(i=0; i<10; i++)
            mx = max(mx, a[i]);

        ans = n-mx;
        int ck = 0, ck1 = 0, ck2 = 1;

        for(char ch1 = '0'; ch1 <= '9'; ch1++)
        {
            for(char ch2 = '0'; ch2 <= '9'; ch2++)
            {
                ck = 0, ck1 = 0, ck2 = 1;

                for(i=0; i<n; i++)
                {
                    if(ch1 != ch2)
                    {
                        if(s[i] == ch1 && ck2 == 1)
                            ck1 = 1, ck2 = 0;
                        else if(s[i] == ch2 && ck1 == 1)
                            ck2 = 1, ck1 = 0, ck++;
                    }
                }
                ans = min(ans, n-2*ck);
            }
        }

        cout << ans << endl;
    }

    return 0;
}

