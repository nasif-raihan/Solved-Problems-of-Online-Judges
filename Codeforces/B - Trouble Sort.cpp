#include<bits/stdc++.h>
using namespace std;

int a[100005], b[100005];

int main()
{
    int i, n, t, ck;

    cin >> t;

    while(t--)
    {
        cin >> n;

        ck = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];

            if(i!=0 && a[i]<a[i-1])
                ck = 1;
        }

        int zero=0, one=0;
        for(i=0; i<n; i++){
            cin >> b[i];

            if(b[i] == 0)   zero++;
            if(b[i] == 1)   one++;
        }

        if(ck == 0)
            cout << "YES" << endl;
        else if(zero > 0 && one > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }


    return 0;
}

