#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s1, s2 = "abacaba", s3;

int subString_count(string s, int n)
{
    int ans = 0;
    string s4 = "";
    for(int i=0; i<n-6; i++)
    {
        s4 = s.substr(i, 7);

        if(s4 == s2)
            ans++;
    }

    return ans;
}

int main()
{
    ll i, j, n, t, ck, got, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> s1;

        ans = subString_count(s1, n);

        if(ans>1)
            cout << "NO" << endl;

        else if(ans == 1)
        {
            for(i=0; i<n; i++){
                if(s1[i] == '?')
                    s1[i] = 'd';
            }
            cout << "YES" << endl << s1 << endl;
        }

        else
        {
            got = 0;
            for(i=0; i<n-6; i++)
            {
                if(s1[i] != 'a' && s1[i] != '?')    continue;

                s3 = s1, ck = 0;

                for(j=0; j<7; j++)
                {
                    if(s3[i+j] == s2[j])
                        continue;
                    else if(s3[i+j] == '?')
                        s3[i+j] = s2[j];
                    else
                    {
                        ck = 1;
                        break;
                    }
                }

                //cout << i << " " << s3 << endl;

                if(ck)  continue;

                ans = subString_count(s3, n);

                if(ans == 1)
                {
                    got = 1;
                    break;
                }
            }

            if(got == 1)
            {
                for(i=0; i<n; i++)
                    if(s3[i] == '?')
                        s3[i] = 'd';

                s1 = s3;
                cout << "YES" << endl << s1 << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}

