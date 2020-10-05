#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t, sum, pow_2, pow_sum;

    cin >> t;

    while(t--)
    {
        cin >> n;

        sum = (n*(n+1))/2;
        pow_2 = 1, pow_sum = 0, i = 1;

        while(pow_2 <= n)
        {
            sum = sum - pow_2;
            pow_sum = pow_sum + pow_2;
            pow_2 = pow(2, i);
            i++;
        }

        cout << sum - pow_sum << endl;
    }

    return 0;
}

