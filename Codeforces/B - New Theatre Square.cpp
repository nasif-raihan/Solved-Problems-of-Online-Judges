#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k, n, m, x, y, t, ck, ck1, ans;
    string s[1005];

    cin>>t;

    while(t--)
    {
        ck = 0;
        cin>> n >> m >> x >> y;

        if(2*x <= y)
            ck = 1;

        for(j=0; j<n; j++)
            cin>>s[j];


        k =0, ans = 0, ck1 = 0;
        for(i=0; i<n; i++)
        {
            k = 0;
            for(j=0; j<m; j++)
            {

                if(s[i][j] == '.')
                {
                    k++;

                    if(j!=0 && s[i][j-1] == '.' && ck1==0)
                        ck1 = 1;
                    else
                        ck1 = 0;

                    if(ck == 0 && ck1==1)
                    {
                        ans = ans + y;
                        k = k - 2;
                    }
                }
                //cout<<ans<<" "<<i<<" "<<j<<endl;
            }

            if(k>0)
                ans = ans + k*x;
        }

        cout<<ans<<endl;
    }

    return 0;
}


