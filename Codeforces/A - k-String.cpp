#include<bits/stdc++.h>
using namespace std;

int a[27];

int main()
{
    int i, j, k, n, v, t, div, rem, ck=0;
    string s, res;
    char c;

    cin >> k >> s;
    n = s.size();

    for(i=0; i<n; i++)
    {
        v = s[i]-'a';
        a[v]++;
    }

    for(i=0; i<27; i++)
    {
        div = a[i]/k;
        rem = a[i]%k;
        a[i] = div;

        if(rem)
        {
            ck=1;
            break;
        }
    }



    if(!ck)
    {
        while(k--)
        {
            for(i=0; i<27; i++)
            {
                if(a[i]!=0)
                {
                    c = 'a'+i;
                    v = a[i];
                    while(v--)
                    {
                        cout<<c;
                    }
                }

            }
        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;


    return 0;
}

