#include<bits/stdc++.h>
using namespace std;

int a[100000], b[100000];

int main()
{
    int i, j, k, n, ck=0, div;

    cin>>n;

    div = n/3;

    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);

    k=0;
    for(i=0; i<div; i++)
    {
        for(j=i; j<n; j=j+div)
        {
            if(j==i)
                b[k]=a[j];

            else if(a[j]>a[j-div] && a[j]%a[j-div]==0)
                b[k]=a[j];

            else{
                ck=1;
                break;
            }

            k++;
        }
    }

    if(ck)  cout << -1 << endl;
    else
    {
        k=0;
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
            k++;

            if(k==3)
            {
                k=0;
                cout<<endl;
            }
        }
    }
    return 0;
}

