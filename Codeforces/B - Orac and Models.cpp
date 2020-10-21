#include<bits/stdc++.h>
using namespace std;

long long s[100005], diiv[100005];

int main()
{
    long long i, j, n, m, t, res;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=1; i<=n; i++)
            cin >> s[i], diiv[i]=1;

        for(i=1; i<=n; i++)
        {
            for(j=i+i; j<=n; j+=i)
                if(s[j]>s[i])
                    diiv[j] = max( diiv[j], diiv[i]+1 );
        }

        res = 1;
        for(i=1; i<=n; i++)
            res = max(res, diiv[i]);

        cout << res << endl;
    }

    return 0;
}

