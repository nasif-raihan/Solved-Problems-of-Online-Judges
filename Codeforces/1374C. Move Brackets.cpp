#include <bits/stdc++.h>
using namespace std;

string s, s1;

int main()
{
    long long i, n, t, ck, fb, lb, ok;

    cin >> t;

    while(t--)
    {
        cin >> n >> s;

        ck = 0, ok = 0, s1 = " ";

        while(1)
        {
            fb = 0, lb = 0;
            for(i=0; i<n; i++)
            {
                if(s[i] == '(') fb++;
                if(s[i] == ')') lb++;

                if(fb<lb)
                {
                    s1 =  s[i];
                    s.erase(i, 1);
                    s = s + s1;
                    ck++;
                    break;
                }
            }
            //cout << s << " " << ck << endl;
            if(fb==lb)
                ok++;
            if(ok == 2)
                break;
        }
        //cout << s << endl;
        cout << ck << endl;
    }

    return 0;
}


