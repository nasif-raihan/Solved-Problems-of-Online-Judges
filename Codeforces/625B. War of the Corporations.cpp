#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main()
{
    int i, j, n, k, ck = 0, count = 0;

    cin >> s1 >> s2;

    n = s1.size(),  k = s2.size(),  j = 0;

    for(i=0; i<n; i++)
    {
        if(s1[i] == s2[j])
        {
            ck = 1;
            if(j == k-1)
            {
                count++;
                j = 0;
            }
            else
                j++;
        }
        else if(ck)
        {
            i = i-j;
            ck = 0;
            j = 0;
        }
    }

    cout << count << endl;

    return 0;
}

