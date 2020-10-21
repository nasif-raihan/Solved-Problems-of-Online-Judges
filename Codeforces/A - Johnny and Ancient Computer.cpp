#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, t, ans;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        if(a < b)   swap(a, b);

        ans = 0;

        while(a>=8*b)   b*=8, ans++;
        while(a>=4*b)   b*=4, ans++;
        while(a>=2*b)   b*=2, ans++;

        if(a != b)  cout << -1 << endl;
        else    cout << ans << endl;
    }
    return 0;
}

