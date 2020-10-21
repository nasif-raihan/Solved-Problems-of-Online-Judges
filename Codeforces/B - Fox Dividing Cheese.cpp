#include<bits/stdc++.h>
using namespace std;

int aa[4], bb[4];

int main()
{
    long long i, a, b, res = 0;

    int m[] = {2, 3, 5};

    cin >> a >> b;

    if(a == b)  cout << 0 << endl;

    else
    {
        for(i=0; i<3; i++)
            while(a%m[i]==0)
            {
                a = a/m[i];
                aa[i]++;
            }

        for(i=0; i<3; i++)
            while(b%m[i]==0)
            {
                b = b/m[i];
                bb[i]++;
            }

        if(a != b)  cout << -1 << endl;
        else
        {
            for(i=0; i<3; i++)
                res = res + abs(aa[i] - bb[i]);

            cout << res << endl;
        }
    }

    return 0;
}

