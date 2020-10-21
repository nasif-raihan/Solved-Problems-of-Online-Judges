#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t;
    string s, r;

    cin >> t;

    while(t--)
    {
        cin >> s;
        n = s.size();

        r = "";
        r = r + s[0];

        for(i=1; i<n; i=i+2)
            r = r + s[i];

        cout << r << endl;
    }


    return 0;
}

