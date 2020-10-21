#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    long long i, n, t, mn, ans, count;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size(), count = 0;
        ans = n, mn = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] == '+') count++;
            if(s[i] == '-') count--;

            if(count < mn)
            {
                ans += i+1;
                mn = count;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

