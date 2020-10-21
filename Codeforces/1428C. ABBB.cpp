#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        n = s.size();

        for(i=1; i<n; i++)
        {
            if(s[i-1]=='A' && s[i]=='B'){
                s.erase(i-1, 2);
                i = i-2;
                n = n-2;
            }
        }

        for(i=1; i<n; i++)
        {
            if((s[i-1]=='B' && s[i]=='B') || (s[i-1]=='B' && s[i]=='B')){
                s.erase(i-1, 2);
                i = i-2;
                n = n-2;
            }
        }

        cout << s.size() << endl;

    }


    return 0;
}
