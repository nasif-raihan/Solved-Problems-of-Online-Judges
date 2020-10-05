#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, T, x, ans;

    cin >> T;

    while(T--)
    {
        cin >> n >> x;

        if(n <= 2)  cout << 1 << endl;
        else
        {
            n -= 2;

            if(n%x != 0)
                cout << n/x+2 << endl;
            else
                cout << n/x+1 << endl;
        }
    }

    return 0;
}
