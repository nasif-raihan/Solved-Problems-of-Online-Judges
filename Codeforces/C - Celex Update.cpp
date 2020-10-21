
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, x2, y1, y2, d1, d2, t;

    cin>>t;

    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        d1 = x2-x1;
        d2 = y2-y1;

        cout<< d1*d2+1 <<endl;
    }

    return 0;
}
