#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, p, r, s;
    char ch;
    string str;

    cin >> t;

    while(t--)
    {
        cin >> str;

        n = str.size();

        p = 0, r = 0, s = 0;
        for(i=0; i<n; i++)
        {
            if(str[i] == 'P') p++;
            if(str[i] == 'R') r++;
            if(str[i] == 'S') s++;
        }

        if(p>=r && p>=s)   ch = 'S';
        else if(r>=p && r>=s)   ch = 'P';
        else if(s>=p && s>=r)   ch = 'R';

        str = string(n, ch);

        cout << str << endl;
    }

    return 0;
}

