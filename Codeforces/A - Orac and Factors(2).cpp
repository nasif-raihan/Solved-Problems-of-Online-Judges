#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, t, even, res, fn, ck;


    vector<long long>x(2000005,true);
    x[0] = 0;
    x[1] = 0;

    long long m = sqrt(2000005);

    for(i=2; i<=m; i++)
    {
        if(x[i])
        {
            for( j=i*i; j<=2000005; j+=i)
            {
                x[j] = 0;
            }
        }
    }


    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        even = 0;
        while(k--)
        {
            //cout<<x[n]<<endl;

            if(n%2==0){
                n = n + 2;
                even = 1;
                break;
            }
            else if(n<= 2000000 && x[n]==1)
                n = n+n;
            else
            {
                for(i=3; i<n; i=i+2)
                {
                    if(n%i==0)
                    {
                        n = n+i;
                        break;
                    }
                }
            }
        }

        if(even)    cout<<n + 2*k<<endl;
        else    cout<<n<<endl;
    }


    return 0;
}

