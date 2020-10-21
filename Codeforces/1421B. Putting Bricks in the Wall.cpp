#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, ans;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> n;

        vector <string> str;

        for(i=0; i<n; i++)
        {
            cin >> s;

            str.push_back(s);
        }

        if(str[0][1] != str[1][0] && str[n-1][n-2] != str[n-2][n-1])
        {
            cout << 2 << endl;

            if(str[0][1] == str[n-1][n-2])
                cout << "1 2" << endl << n-1 << " " << n << endl;
            else
                cout << "2 1" << endl << n-1 << " " << n << endl;

        }
        else if((str[0][1] == str[1][0]) && (str[n-1][n-2] == str[n-2][n-1]) && (str[0][1] == str[n-1][n-2]))
        {
            cout << 2 << endl;

            cout << "1 2" << endl << "2 1" << endl;
        }
        else if(str[0][1] == str[1][0] && str[n-1][n-2] == str[n-2][n-1])
            cout << 0 << endl;

        else
        {
            cout << 1 << endl;

            if(str[0][1] == str[1][0])
            {
                if(str[0][1] != str[n-1][n-2])
                    cout << n-1 << " " << n << endl;
                else
                    cout << n << " " << n-1 << endl;
            }
            else
            {
                if(str[0][1] != str[n-1][n-2])
                    cout << 2 << " " << 1 << endl;
                else
                    cout << 1 << " " << 2 << endl;
            }
        }
    }

    return 0;
}
