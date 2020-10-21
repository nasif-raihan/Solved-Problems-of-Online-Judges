#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <ll, ll> p_sum;

int main()
{
    ll i, n, a, sum, ans;

    cin >> n;

    p_sum[0] = 1;
    sum = ans = 0;

    for(i=0; i<n; i++)
    {
        cin >> a;

        sum += a;

        if(p_sum[sum] > 0)
        {
            ans++;
            p_sum.clear();
            p_sum[0] = 1;
            sum = a;
        }

        p_sum[sum] = 1;
    }

    cout << ans << endl;

    return 0;
}
