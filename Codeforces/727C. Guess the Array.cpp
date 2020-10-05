#include <bits/stdc++.h>
using namespace std;

int a[5005];

int ask(int i, int j)
{
    cout << "? " << i << " " << j << endl;

    int in;
    cin >> in;

    cout.flush();

    return in;
}
int main()
{
    int i, n, a1, a2, a3;

    cin >> n;

    a1 = ask(1, 2);
    a2 = ask(2, 3);
    a3 = ask(3, 1);

    a[1] = (a1+a3-a2)/2;
    a[2] = a1 - a[1];
    a[3] = a3 - a[1];

    for(i=4; i<=n; i++)
        a[i] = ask(1, i) - a[1];

    cout << "! ";
    for(i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

