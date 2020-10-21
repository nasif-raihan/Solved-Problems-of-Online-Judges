#include<bits/stdc++.h>
using namespace std;

long long a[100];

int main()
{
    long long i, j, n, d, T, ans;

    cin>> T;

    while(T--)
    {

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);

        ans = 1e4;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i!=j)
                {
                    d = abs(a[i]-a[j]);
                    ans = min(d,ans);
                }
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}


