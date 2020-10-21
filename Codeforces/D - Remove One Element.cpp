#include<bits/stdc++.h>
using namespace std;

long long a[200005], b[200005], c[200005];
bool bb[200005];

int main()
{
    long long i, n, v, ck, mx, ans, temp;

    cin>>n;

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
        b[i]=1;

    for(i=0; i<n; i++)
    {
        if(i != 0)
        {
            if(a[i]>a[i-1])
            {
                b[i] = b[i]+b[i-1];
            }
        }
    }

    ck=0;
    for(i=n-1; i>=0; i--)
    {
        v = b[i];

        if(ck==0)
        {
            temp = v;
            c[i] = temp;
            ck = temp-1;
        }
        else
        {
            c[i] = temp;
            ck--;
        }
    }


    for(i=0; i<n; i++)
    {
        if(b[i]==1)
            bb[i]=1;
    }


//    cout<<"Bool : ";
//    for(i=0; i<n; i++)
//        cout<<bb[i]<<" ";
//    cout<<endl;
//
//    cout<<"Max : ";
//    for(i=0; i<n; i++)
//        cout<<c[i]<<" ";
//    cout<<endl;
//
//    cout<<"Sequence : ";
//    for(i=0; i<n; i++)
//        cout<<b[i]<<" ";
//    cout<<endl;

    ans = -1;
    for(i=n-1; i>=0; i--)
    {
        if(bb[i]==1)
        {

            if(i-2>=0 && a[i-2]<a[i])
            {
                mx = c[i] + b[i-2];
                ans = max(ans, mx);
            }
            else if(i-1>=0 && i+1<=n && a[i-1]<a[i+1])
            {
                mx = c[i-1] + (c[i]-1);
                ans = max(ans, mx);
            }
            else
                ans = max(ans, c[i]);
        }
    }

    cout<<ans<<endl;

    return 0;
}

