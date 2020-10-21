
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long col[3];

    cin >> col[0] >> col[1] >> col[2];

    sort(col, col+3);

    if(col[2] > 2*(col[0] + col[1]))
        col[2] = 2*(col[0] + col[1]);

    cout << ((col[0] + col[1] + col[2])/3) << endl;

    return 0;
}
