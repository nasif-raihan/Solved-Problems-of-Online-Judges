#include <bits/stdc++.h>
using namespace std;

int a[200005];

int main()
{
    int i, t, n, ans, left, right;
    char ch;

    cin >> t;

    left  = t+1;
    right = t+1;

    for(i=0; i<t; i++)
    {
        cin >> ch >> n;

        if(i==0 && ch != '?')
            a[n] = left;
        else
        {
            if(ch == 'L')
            {
                left--;
                a[n] = left;
            }
            else if(ch == 'R')
            {
                right++;
                a[n] = right;
            }
            else
            {
                ans = min(a[n]-left, right-a[n]);
                cout << ans << endl;
            }
        }
    }

    return 0;
}

