#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
ll letters[27];

int main()
{
    ll i, j, n, t, v, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        memset(letters, 0, sizeof(letters));

        for(i=0; i<n; i++)
        {
            cin >> s;

            for(j=0; j<s.size(); j++)
            {
                v = s[j] - 'a';
                letters[v]++;
            }
        }

        ck = 0;

        for(i=0; i<26; i++)
        {
            //cout << letters[i] << " ";
            if(letters[i]%n != 0)
            {
                ck = 1;
                break;
            }
        }

        //cout << endl;

        if(ck)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
