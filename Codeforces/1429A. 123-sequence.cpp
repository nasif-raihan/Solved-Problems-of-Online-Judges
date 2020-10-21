#include <bits/stdc++.h>
using namespace std;

int ans[3];
bool b[3];

int main()
{
    int i, j, n;

    cin >> n;

    int a[n];

    for(i=0; i<n; i++)  cin >> a[i];

    sort(a, a+n);

    j=0, ans[0] = 1;

    for(i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
        {
            b[j] = 1;
            j++;
            ans[j] = 1;
        }
        else
            ans[j]++;
    }

    sort(ans, ans+3);

    cout << ans[0] + ans[1] << endl;

    return 0;
}
