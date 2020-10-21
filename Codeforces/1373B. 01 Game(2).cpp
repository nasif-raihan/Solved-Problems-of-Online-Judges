#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, ck, one, zero;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();

        one = 0, zero = 0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')   zero++;
            if(s[i]=='1')   one++;
        }

        ck = min(zero, one);

        if(ck%2==0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

    return 0;
}

