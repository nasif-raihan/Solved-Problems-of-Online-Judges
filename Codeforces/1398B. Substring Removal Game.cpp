#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, t, one, ans;
    vector <ll> v;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();
        v.clear();
        one = ans = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] == '1')
                one++;
            else
            {
                v.push_back(one);
                one = 0;
            }
        }

        if(one)
            v.push_back(one);

        sort(v.rbegin(), v.rend());

        for(i=0; i<v.size(); i+=2)
            ans = ans + v[i];

        cout << ans << endl;
    }

    return 0;
}


