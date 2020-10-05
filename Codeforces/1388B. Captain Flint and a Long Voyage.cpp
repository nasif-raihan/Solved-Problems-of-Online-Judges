#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, t, ck, l, h, ans;
    string s, s1, s2, ch;

    cin >> t;

    while(t--)
    {
        cin >> n;

        s = "", s1 = "", s2 = "";

        if(n%4 == 0)
            l = n/4;
        else
            l = n/4 + 1;

        string s2(l, '8');

        //cout << s2 << endl;

        ll sz = s2.size();
        n = n - sz;

        string s1(n, '9');
        s = s1 + s2 ;

        cout << s << endl;
    }

    return 0;
}

