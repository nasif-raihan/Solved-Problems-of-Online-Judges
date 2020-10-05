#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, r, t, ck, ans;

    cin >>t;

    while(t--)
    {
        cin >> n >> r;

        if(n>r)
            ans = r*(r+1)/2;
        else if(n == r)
            ans = (r-1)*(r)/2 + 1;
        else
            ans = (n-1)*n/2 + 1;

        cout << ans << endl;
    }

    return 0;
}

