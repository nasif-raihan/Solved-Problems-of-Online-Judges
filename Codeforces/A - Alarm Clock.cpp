#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, t, a, b, c, d, div, rem, res, dif;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;

        if(a<=b)    cout<<b<<endl;
        else
        {
            res = a-b;

            if(c<=d)    cout<<-1<<endl;
            else
            {
                dif = c-d;

                if(res%dif==0)
                    div = res/dif;
                else    div = res/dif + 1;

                res = b + div*c;

                cout<<res<<endl;
            }
        }
    }


    return 0;
}

