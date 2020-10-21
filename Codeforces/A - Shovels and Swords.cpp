
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, T, ans;

    cin >> T;

    while(T--)
    {
        cin >> a >> b;

        if(a<b) swap(a, b);

        if(a>2*b)   a = 2*b;

        ans = (a+b)/3;

        cout << ans << endl;
    }

    return 0;
}
