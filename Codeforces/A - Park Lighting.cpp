#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, m, t, ck, ans;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        ans = n*m;

        if(ans%2==0)
            cout<<ans/2<<endl;
        else
            cout<<ans/2+1<<endl;
    }

    return 0;
}


