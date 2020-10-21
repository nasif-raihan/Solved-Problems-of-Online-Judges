#include<bits/stdc++.h>
using namespace std;

long long a[40], b[40];

int main()
{
    long long i, j, n, k, ck, t, sum1, sum2;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        sum1 =0, sum2 =0, ck=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(i=0; i<n; i++)
        {
            cin>>b[i];
            sum2 = sum2 + b[i];
        }
        sort(b, b+n);

        for(i=0, j=n-1; i<n; i++,j--)
        {
            if(ck==k)   break;
            else if(a[i]<b[j])
                swap(a[i],b[j]), ck++;
        }

        for(i=0; i<n; i++)
            sum1 = sum1 + a[i];

        cout<<sum1<<endl;
    }

    return 0;
}

