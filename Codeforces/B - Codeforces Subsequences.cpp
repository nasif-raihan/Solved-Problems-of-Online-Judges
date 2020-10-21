/**
*   created :
**/

#include <bits/stdc++.h>
using namespace std;

string s = "codeforces";

int main()
{
    long long i, j, k, kount;
    vector<long long> v(10, 1);

    cin >> k;

    j = 0, kount = 1;
    while(kount < k)
    {
        v[j]++;
        j = (j+1)%10;
        kount = 1;

        for(i=0; i<10; i++)
            kount = kount*v[i];
    }

    for(i=0; i<10; i++)
        while(v[i]--)
            cout << s[i];
    cout << endl;

    return 0;
}

