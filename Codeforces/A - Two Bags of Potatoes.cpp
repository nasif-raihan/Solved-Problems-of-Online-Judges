#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, k, y, div, rem;

    cin>>y>>k>>n;

    div = (y/k)+1;

    if(n<=y || div*k > n)    cout<<-1<<endl;
    else
    {
        while(div*k <= n)
        {
            rem = div*k - y;
            div++;
            printf("%lld ",rem);
        }
        cout<<endl;
    }


    return 0;
}

