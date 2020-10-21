#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, ck1, ck2, pos, zero;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> n >> s;

        ck1 = 0, ck2 = 0,  pos = 0, zero = 0;
        for(i=n-1; i>=0; i--)
        {
            if(s[i] == '0' && ck1 == 0)
                ck1 = 1,  zero = i;

            if(ck1 == 1)
            {
                if(s[i] == '1')
                    pos = i,  ck2 = 1;
            }
        }

        //cout << "pos : " << pos << " zero : " << zero << endl;
        if(ck1 == 1 && ck2 == 1)
        {
            for(i=0; i<n; i++)
            {
                if(i>=pos && i<zero)
                    continue;
                else
                    cout << s[i]; //<< " " << i << endl;
            }
            cout << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}

