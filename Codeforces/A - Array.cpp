#include<bits/stdc++.h>
using namespace std;

int ar[105], a[100], b[100], c[100];

int main()
{
    int n1, n2, n3, n, i, j, k, l;

//    while(1){
//            memset((a,b,c), 0, sizeof(a));
    cin>>n;

    n1 = 0, n2 = 0, n3 = 0;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];

        if(ar[i]==0)
        {
            c[n3]=0;
            n3++;
        }
        else if(ar[i]>0)
        {
            b[n2]=ar[i];
            n2++;
        }
        else
        {
            a[n1]=ar[i];
            n1++;
        }
    }

    if(n2==0)
    {
        b[n2] = a[n1-1];
        n2++, n1--;
        b[n2] = a[n1-1];
        n2++, n1--;
    }

    if(n1%2==0)
    {
        c[n3] = a[n1-1];
        n3++, n1--;
    }

    cout<<n1<<" ";
    for(i=0; i<n1; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    cout<<n2<<" ";
    for(i=0; i<n2; i++)
        cout<<b[i]<<" ";
    cout<<endl;

    cout<<n3<<" ";
    for(i=0; i<n3; i++)
        cout<<c[i]<<" ";
    cout<<endl;
    //}
    return 0;
}
