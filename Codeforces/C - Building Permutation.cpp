#include<bits/stdc++.h>
using namespace std;

long long a[300005];
bool b[300005];

int main()
{
    long long i, n, dif, sum=0;

    cin>>n;

    for(i=1; i<=n; i++)
        cin>>a[i];

    sort(a+1, a+n+1);

    for(i=1; i<=n; i++)
    {
        dif = abs(i - a[i]);
        sum = sum + dif;
    }

    cout<<sum<<endl;

    return 0;
}

