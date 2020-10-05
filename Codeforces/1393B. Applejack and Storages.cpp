#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005], b[100005], c[100005];

int main()
{
    ll i, n, v, q, sq, rq, ck, ans;
    char ch;

    cin >> n;

    sq = 0, rq = 0;

    for(i=0; i<n; i++)
    {
        cin >> v;
        a[v]++;

        if(a[v]%4 == 0 && b[v] == 0)
        {
             sq++;
             rq--;
             b[v] = 1;
        }

        else if(a[v]%2 == 0)
            rq++, c[v] = 1;

    }

    cin >> q;

    for(i=0; i<q; i++)
    {
        cin >> ch >> v;

        if(ch == '+')
        {
            a[v]++;

            if(a[v]%4 == 0 && b[v] == 0)
            {
                 sq++;
                 rq--;
                 b[v] = 1;
            }

            else if(a[v]%2 == 0)
                rq++, c[v] = 1;
        }
        else
        {
            a[v]--;

            if(b[v]==1 && a[v]<4)
            {
                 sq--;
                 rq++;
                 b[v] = 0;
            }

            else if(a[v]%2 != 0 && c[v] == 1)
                rq--;

            if(a[v] <= 1)
                c[v] = 0;
        }

        //cout << "sq & rq : " << sq << " " << rq << endl;

        if(sq>=2)
            cout << "YES" << endl;
        else if(sq==1 && rq>=2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}


