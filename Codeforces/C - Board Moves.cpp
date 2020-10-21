
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, j, n, t, sum;

    cin>>t;

    while(t--)
    {
        cin>>n;

        j=8, sum=0;
        for(i=1; i<=n/2; i++)
        {
            j=8*i;
            sum = sum + j*i;
            //cout<<j<<endl;
        }

        cout<<sum<<endl;
    }


    return 0;
}
