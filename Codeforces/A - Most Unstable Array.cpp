#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, m, T, res, div, d1, d2;

    cin>>T;

    while(T--)
    {
        cin>>n>>m;

        if(n==1)    cout<<0<<endl;
        else if(n==2)   cout<<m<<endl;
        else if(n==3)   cout<<2*m<<endl;
        else
        {
            if(m%2==0)
            {
                div = n/2;

                res = (4)*(m/2);
            }
            else
            {
                div = n/2;

                res = (2)*(m/2) + (m/2 + 1)*2;
            }

            cout<<res<<endl;
        }

    }


    return 0;
}

