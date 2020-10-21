#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long a[200005], b[200005];

int main()
{
    long long i, j, k, n, v, t, ck;

    cin>>t;

    while(t--)
    {
        cin>>n;

        //memset(b, 0, sizeof(b));

        for(i=0; i<=n+1; i++)
            b[i]=0;

        for(i=1; i<=n; i++){
            cin>>a[i];
            v = a[i];
            b[v]++;
        }


        ck=0;
        for(i=1; i<=n; i++)
        {
            if(b[i]>=i)
            {
                ck = ck + b[i]/i;
                b[i+1] = b[i+1] + b[i]%i;
            }
            else
            {
                b[i+1] = b[i]+b[i+1];
            }
        }

        cout<<ck<<endl;
    }


    return 0;
}

