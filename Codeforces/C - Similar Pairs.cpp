#include<bits/stdc++.h>
using namespace std;

long long a[100], e[100], ue[100];
bool b[100];

int main()
{
    long long i, j, n, T;

    cin>>T;

    while(T--)
    {

        cin>>n;

        long long ck1=0, ck2=0, ck=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]%2==0)
            {
                e[ck1] = a[i];
                ck1++;
            }
            else
            {
                ue[ck2] = a[i];
                ck2++;
            }
        }

        sort(a, a+n);

        if(ck1%2==0 && ck2%2==0)
            cout<<"YES"<<endl;
        else
        {
            if(ck1>ck2)
            {
                for(i=0; i<ck2; i++)
                {
                    for(j=0; j<ck1; j++)
                    {
                        if(abs(e[j]-ue[i])==1)
                        {
                            ck=1;
                            cout<<"YES"<<endl;
                            break;
                        }
                    }
                    if(ck)
                        break;
                }
            }
            else
            {
                for(i=0; i<ck1; i++)
                {
                    for(j=0; j<ck2; j++)
                    {
                        if(abs(e[i]-ue[j])==1)
                        {
                            ck=1;
                            cout<<"YES"<<endl;
                            break;
                        }
                    }
                    if(ck)
                        break;
                }
            }

            if(ck==0)
                cout<<"NO"<<endl;
        }

    }


    return 0;
}

