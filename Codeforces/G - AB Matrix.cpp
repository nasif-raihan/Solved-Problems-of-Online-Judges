#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a, b, n, m, T;

    cin >> T;

    while(T--)
    {
        cin >> n >> m >> a >> b;

        if(n*a != m*b)
            cout<<"NO"<<endl;
        else
        {
            int one = 0, ck = -1;
            int mat[n+1][m+1];

            for(i=0; i<n; i++)
                for(j=0; j<m; j++)
                    mat[i][j] = 0;

            cout<<"YES"<<endl;

            for(i=0; i<n; i++)
            {
                one=a;
                for(j=0; j<m; j++)
                {
                    if(one>0 && j>ck)
                    {
                        mat[i][j] = 1;
                        one--;
                        ck = j;

                        if(ck == m-1)
                            ck = -1;
                    }
                }

                if(one>0)
                {
                    for(j=0; j<m; j++)
                    {
                        if(one>0 && j>ck)
                        {
                            mat[i][j] = 1;
                            one--;
                            ck = j;

                            if(ck == m-1)
                                ck = -1;
                        }
                    }
                }
            }

            for(i=0; i<n; i++){
                for(j=0; j<m; j++)
                    cout<<mat[i][j];
                cout<<endl;
            }

        }
    }

    return 0;
}

