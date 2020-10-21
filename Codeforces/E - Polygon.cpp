#include<bits/stdc++.h>
using namespace std;

string s[51];

int main()
{
    int i, j, n, t, ck;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0; i<n; i++)
            cin>>s[i];

        int ok[n+1][n+1];

        for(i=0; i<n; i++){
            for(j=0; j<n; j++)
                ok[i][j]=0;
        }

        ck = 0;
        for(i=n-1; i>=0; i--)
        {
            for(j=n-1; j>=0; j--)
            {
                if(j == n-1  || i == n-1)
                {
                    if(s[i][j] == '1')
                    {
                        ok[i][j]=1;
                    }
                }
                else if(s[i][j] == '1')
                {
                    if(ok[i][j+1] == 1)
                        ok[i][j]=1;
                    else if(ok[i+1][j] == 1)
                        ok[i][j]=1;
                    else
                    {
                        ck=1;
                        break;
                    }
                }
            }
        }

        if(ck)  cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }

    return 0;
}

