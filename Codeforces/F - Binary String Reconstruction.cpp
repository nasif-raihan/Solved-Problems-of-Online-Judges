#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n0, n1, n2;

    cin>>t;

    while(t--)
    {
        cin>>n0>>n1>>n2;

        if(!n1)
        {
            if(n0) cout << string(n0+1, '0') <<endl;
            else cout << string(n2+1, '1') <<endl;
        }
        else
        {
            string ans;

            for(i=0; i<n1+1; i++)
                if(i%2==0)  ans = ans + "1";
                else ans = ans + "0";

            ans.insert(1, string(n0, '0'));
            ans.insert(0, string(n2, '1'));

            cout << ans << endl;
        }
    }

    return 0;
}

