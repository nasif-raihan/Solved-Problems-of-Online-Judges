#include<bits/stdc++.h>
using namespace std;

int c[1005];

int main()
{
    int i, j, a, b, n, x, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> x;

        for(i=0; i<=n+1; i++)
            c[i]=0;

        for(i=1; i<n; i++)
        {
            cin >> a >> b;

            c[a]++;
            c[b]++;
        }

        if(c[x] <= 1)
            cout << "Ayush" << endl;
        else if(n%2 == 1)
            cout << "Ashish" << endl;
        else
            cout << "Ayush" << endl;

    }

    return 0;
}

