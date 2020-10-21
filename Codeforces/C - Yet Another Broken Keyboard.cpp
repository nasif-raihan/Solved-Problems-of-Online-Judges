#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, t, no_sub=0, ck=0;
    string s;
    char c;
    int ch[27];


    cin>>n>>k>>s;

    for(i=0; i<k; i++)
    {
        cin>>c;
        t = c - 'a';
        ch[t]=1;
    }

    for(i=0; i<=n; i++)
    {
        t = s[i]-'a';

        if(ch[t] != 1)
        {
            no_sub = no_sub + ((ck*(ck+1))/2);
            ck=0;
        }
        else    ck++;
    }

    cout<<no_sub<<endl;
    return 0;
}

