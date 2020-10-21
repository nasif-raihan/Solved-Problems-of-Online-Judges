
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, v, t, mn, ans;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        n = s.size();

        int last[] = {-1, -1, -1};
        ans = n+1;

        for(i=0; i<n; i++)
        {
            v = s[i] - '1';
            last[v] = i;

            mn = *min_element(last, last+3);

            if(mn > -1)
                ans = min(ans, i-mn+1);
        }

        if(mn>-1)
            cout << ans << endl;
        else
            cout << 0 << endl;

    }


    return 0;
}
