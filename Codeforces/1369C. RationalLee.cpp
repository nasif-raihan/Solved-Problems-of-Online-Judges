#include <bits/stdc++.h>
using namespace std;

long long a[200005], b[200005];
bool bb[200005];

int main()
{
    long long i, n, k, t;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        for(i=0; i<n; i++)
            bb[i] = 0;

        for(i=0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        for(i=0; i<k; i++)
            cin >> b[i];

        sort(b, b+k);

        long long mx_sum = 0, kk = k, j=0;
        for(i=n-1; i>=0; i--)
        {
            //cout << b[j] << " " << a[i] << " " << mx_sum << " ";
            if(b[j]==1)
                mx_sum = mx_sum + a[i]*2,   b[j]--;
            else
                mx_sum = mx_sum + a[i],   b[j]--;

            //cout << a[i] << " " << mx_sum << endl;

            bb[i] = 1;

            j++,   kk--;

            if(kk == 0)
                break;
        }


        long long mn_sum = 0, kount = 0;
        kk = k, j=0;
        for(i=k-1; i>=0; i--)
        {
            kount = 0;
            while(b[i]!=0)
            {
                if(bb[j] == 0)
                    if(kount == 0)
                    {
                        //cout << a[j] << " ";
                        mn_sum += a[j], bb[j] = 1, j++;
                        b[i]--;
                        kount++;
                        continue;
                    }

                bb[j] = 1,   j++,  b[i]--,   kount++;
            }
            //cout << endl;
        }

        //cout << mx_sum << " " << mn_sum << endl;
        cout << mx_sum + mn_sum << endl;
    }

    return 0;
}

//1
//9 2
//1 2 3 4 5 6 7 8 9
//3 6

