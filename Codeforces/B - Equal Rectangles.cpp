#include<bits/stdc++.h>
using namespace std;

int a[405];

int main()
{
    int i, j, n, t, ck;
    set<int>s;

    cin >> t;

    while(t--)
    {
        cin >> n;
        s.clear();

        for(i=0; i<4*n; i++)
            cin >> a[i];

        sort(a, a+4*n);

        ck = 0;
        for(i=0, j=4*n-1;   i+1<j;   i+=2, j-=2)
        {
            if(a[i]==a[i+1] && a[j]==a[j-1])
                s.insert(a[i]*a[j]);
            else{
                ck = 1;
                break;
            }
        }

        if(ck==0 && s.size()==1)
            cout << "YES" << endl;
        else
            cout << "NO"  << endl;
    }

    return 0;
}

