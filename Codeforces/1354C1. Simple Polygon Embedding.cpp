#include<bits/stdc++.h>
#define pi acos(-1.00)
using namespace std;

int main()
{
    long double n, t, d;

    cin>>t;

    while(t--)
    {
        cin>>n;

        n = 2*n;

        d = (1/(tan(pi/(n))));

        cout << fixed << setprecision(7) << d << endl;
    }

    return 0;
}

