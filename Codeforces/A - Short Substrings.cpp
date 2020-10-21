
#include<bits/stdc++.h>
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

        cout << s[0];
        for(i=1; i<n; i=i+2)
            cout << s[i];
        cout << endl;
    }

    return 0;
}
