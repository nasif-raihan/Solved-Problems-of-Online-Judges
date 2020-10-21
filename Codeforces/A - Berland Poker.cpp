#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, m, t, ck, rem, div, d, ans;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;

        ck = n/k;

        if(ck>=m)
            cout<<m<<endl;
        else if(ck<m)
        {
            if((m-ck)%(k-1)!=0)
                div = (m-ck)/(k-1)+1;
            else
                div = (m-ck)/(k-1);

            cout<<ck - div<<endl;
        }

    }

    return 0;
}

