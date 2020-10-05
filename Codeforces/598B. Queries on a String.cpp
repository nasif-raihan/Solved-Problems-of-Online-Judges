#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int i, k, l, n, m, r;

    cin >> s >> m;

    n = s.size();

    for(i=0; i<m; i++)
    {
        cin >> l >> r >> k;

        int dis = r-l+1;
        k = k%dis;
        l = l-1;
        r = r-1;

//        cout << s.substr(0, l) << endl;
//        cout << s.substr(l+dis-k, k) << endl;
//        cout << s.substr(l, (r-l-k)) << endl;
//        cout << s.substr(r+1) << endl;

        s = s.substr(0, l) + s.substr(l+dis-k, k) + s.substr(l, (dis-k)) + s.substr(r+1);
    }

    cout << s << endl;

    return 0;
}
