#include <bits/stdc++.h>
using namespace std;

int ans[3005];

int main()
{
    int i, j, n, t;
    string a, b;

    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b;

        j = 0;
        for(i=0; i<n; i++)
        {
            if(a[i] != b[i])
            {
                ans[j] = i+1;
                j++;
                ans[j] = 1;
                j++;
                ans[j] = i+1;
                j++;
            }
        }

        cout << j << " ";
        for(i=0; i<j; i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}


