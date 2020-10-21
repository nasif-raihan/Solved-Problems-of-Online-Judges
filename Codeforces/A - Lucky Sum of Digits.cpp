#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, a, b, div, rem, sub, ck=0, mn;

    cin>>n;

    mn = 2e6;
    for(i=0; i<= (n/7+1) ;i++)
    {
        sub = (n-7*i);

        if(sub>=0)
        {
            div = sub/4;
            rem = sub%4;

            if(rem == 0)
            {
                if(i+div<mn)
                {
                    ck = 1;
                    mn = i+div;
                    a = div;
                    b = i;
                }

            }
        }
        else
            break;

    }

    if(!ck) cout<<-1<<endl;
    else
    {
        for(i=0; i<a; i++)
            cout<<4;
        for(i=0; i<b; i++)
            cout<<7;
        cout<<endl;
    }

    return 0;
}

