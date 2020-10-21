#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, s, t, ck,  rem, res, sub;

    cin>>n>>s;

    if(2*n <= s)
    {
        cout << "YES" << endl;

        for(j=0; j<n-1; j++)
            cout<<2<<" ";
        cout<<s - 2*(n-1)<<endl<<1<<endl;

    }
    else
        cout << "NO" << endl;


    return 0;
}

