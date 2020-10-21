#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, ck, t, temp;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        ck = 0;

        while(s.size() != 0)
        {
            temp = ck;
            for(i=0; i<s.size(); i++)
            {
                if(s.size()==1)
                    break;
                else if(i == 0)
                {
                    if(s[i]!=s[i+1])
                    {
                        s.erase(i, 2);
                        ck++;
                        break;
                    }
                }
                else if(i == s.size()-1)
                {
                    if(s[i]!=s[i-1])
                    {
                        s.erase(i-1, 2);
                        ck++;
                        break;
                    }
                }
                else if(s[i]!=s[i+1])
                {
                    s.erase(i, 2);
                    ck++;
                    break;
                }
                else if(s[i]!=s[i-1])
                {
                    s.erase(i-1, 2);
                    ck++;
                    break;
                }
            }

            if(temp == ck)
                break;
        }

        if(ck%2==0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

    return 0;
}


