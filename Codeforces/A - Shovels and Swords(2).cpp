#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, T, ans;

    cin >> T;

    while(T--)
    {
        cin >> a >> b;

        ans = (a+b)/3;
        ans = min(min(a, b), ans);

        cout << ans << endl;
    }

    return 0;
}

