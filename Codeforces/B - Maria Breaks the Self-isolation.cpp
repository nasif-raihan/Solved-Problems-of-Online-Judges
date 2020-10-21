#include<bits/stdc++.h>
using namespace std;

long long a[200005], b[200005];

int main()
{
    long long i, j, k, n, t, ck, ans;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=1; i<=n; i++)
            cin>>a[i];

        sort(a+1,a+n+1);

        for(i=n; i>0; i--)
        {
            if(a[i]<=i)
            {
                ans = i+1;
                break;
            }
            else
                ans = 1;
        }

        cout<<ans<<endl;

    }

    return 0;
}

