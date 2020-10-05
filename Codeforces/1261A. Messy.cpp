#include <bits/stdc++.h>
using namespace std;

int a[2][2005];

int main()
{
    int i, j, k, n, t, rem, ans;
    string s, res, f_res, b_res;

    cin >> t;

    while(t--)
    {
        cin >> n >> k >> s;

        res = "", f_res = "", b_res = "", ans = 0;
        rem = n- 2*(k-1);

        for(i=1; i<k; i++)
            res = res + "()";

        string f_res(rem/2, '(');
        string b_res(rem/2, ')');

        res = res + f_res + b_res;

        int l, r;
        for(i=0; i<n; i++)
        {
            if(s[i] == res[i])
                continue;
            else
            {
                for(j=i; j<n; j++)
                {
                    if(res[i] == s[j])
                    {
                        reverse(s.begin()+i, s.begin()+j+1);

                        a[0][ans] = i+1;
                        a[1][ans] = j+1;
                        ans++;
                        break;
                    }

                    if(s == res)
                        break;
                }
            }
        }

        cout << ans << endl;
        for(i=0; i<ans; i++)
            cout << a[0][i] << " " << a[1][i] << endl;
    }



    return 0;
}

