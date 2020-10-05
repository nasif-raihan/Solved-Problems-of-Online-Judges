#include <bits/stdc++.h>
using namespace std;

int letters[26];
string s, s1, s2, m;

int main()
{
    int i, j, n, v;

    cin >> s;

    n = s.size();

    for(i=0; i<n; i++)
    {
        v = s[i]-'a';
        letters[v]++;
    }

    for(i=25; i>=0; i--)
    {
        if(letters[i]%2 == 1)
        {
            for(j=0; j<26; j++)
            {
                if(i != j && letters[j]%2 == 1)
                {
                    letters[j]++, letters[i]--;
                    break;
                }
            }
        }
    }


    s1 = "", m = "";
    for(i=0; i<26; i++)
    {
        s2 = "";

        if(letters[i]%2 == 1){
            string s2((letters[i]-1)/2, 'a'+i);
            s1 = s1 + s2;
            m = 'a' + i;
        }
        else{
            string s2(letters[i]/2, 'a'+i);
            s1 = s1 + s2;
        }
    }

    s2 = s1;
    reverse(s2.begin(), s2.end());
    s = s1 + m + s2;

    cout << s << endl;

    return 0;
}

