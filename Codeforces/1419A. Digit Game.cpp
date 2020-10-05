#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i, n, t, ck;
    string num;

    cin >> t;

    while(t--)
    {
        cin >> n >> num;

        i = ck = 0;

        if(n%2)
        {
            for(i=0; i<n; i+=2)
                if((num[i]-'0')%2)
                {
                    ck = 1;
                    break;
                }

            if(ck)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            for(i=1; i<n; i+=2)
                if(!((num[i]-'0')%2))
                {
                    ck = 1;
                    break;
                }

            if(ck)
                cout << 2 << endl;
            else
                cout << 1 <<endl;
        }
    }

    return 0;
}
