
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, a, b, n, T, ck, sum;

    cin >> T;

    while(T--)
    {
        cin >> a >> b >> n;

        long long mx = max(a, b);
        long long mn = min(a, b);

        ck = 0, sum = 0;
        while(sum <= n)
        {
            //cout << sum << endl;
            sum = mn + mx;

            mn = mx;
            mx = sum;

            ck++;
        }

        cout << ck << endl;
    }


    return 0;
}
