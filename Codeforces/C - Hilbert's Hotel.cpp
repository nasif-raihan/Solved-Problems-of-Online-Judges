#include<bits/stdc++.h>
using namespace std;

long long a[200005];
bool b[200005];

int main()
{
    long long i, n, v, rem, ck, t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        memset(b, 0, sizeof(b));

        ck = 0;
        for(i=0; i<n; i++){
            cin>>a[i];

            if((i+a[i])%n<0)
                rem = (i+a[i])%n + n;
            else
                rem = (i+a[i])%n;

            if(b[rem]==0)
                b[rem]=1;
            else
                ck=1;

            //cout<<rem<<endl;
        }


//        for(i=0; i<n; i++)
//            cout<<b[i]<<" ";
//        cout<<endl;

        if(!ck)
        for(i=0; i<n; i++)
        {
            if(b[i]==0)
            {
                ck=1;
                break;
            }
        }


        if(ck)  cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }

    return 0;
}

