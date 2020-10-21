#include<bits/stdc++.h>
using namespace std;

int a[105], b[105];

int main()
{
    int i, j, n, ck = 0;

    cin>>n;

    for(i=0; i<n; i++)
        cin >> a[i] >> b[i];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i] == b[j]  && i!=j){
                ck++;
                break;
            }
        }
    }

    cout << n-ck <<endl;

    return 0;
}

