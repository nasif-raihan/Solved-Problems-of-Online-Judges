
#include<bits/stdc++.h>
using namespace std;

int a[55][55];

int main()
{
    long long i, j, k, n, m, t, ck, ans;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        ck = 0;
        for(i =0 ; i<n; i++)
        {
            int z = 0;
            for(j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        int r = 0;
        for(i =0 ; i<n; i++)
        {
            int z = 0;
            for(j=0; j<m; j++){
                if(a[i][j] == 1 && z == 0)
                    r++, z = 1;
            }
        }

        int c = 0;
        for(i =0 ; i<m; i++)
        {
            int z = 0;
            for(j=0; j<n; j++){
                if(a[j][i] == 1 && z == 0)
                    c++, z = 1;
            }
        }

        m = m-c;
        n = n-r;

        if(m==0 || n == 0)
            cout << "Vivek" << endl;
        else
        {
            r = min(m,n);
            if(r%2 == 0)   cout << "Vivek" << endl;
            else    cout << "Ashish" << endl;
        }

    }

    return 0;
}
