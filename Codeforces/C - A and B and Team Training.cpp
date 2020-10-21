#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mx;

    cin >> n >> m;

    mx = max(n, m);

    if(mx > 2*(m+n-mx))
        cout << min(m, n) << endl;
    else
        cout << (m+n)/3 << endl;

    return 0;
}

