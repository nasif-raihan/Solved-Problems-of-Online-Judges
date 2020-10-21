#include<bits/stdc++.h>
using namespace std;

long long a[200005], c[200005];

int main()
{
    long long i, j, n, t, ck, ans, sum;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        ck = 1, j=0;
        long long g=0, s=0;
        for(i=0; i<n; i++)
        {
            //cout << g << " " << s << endl;
            if(i==0)
            {
                c[j] = a[0];
                j++;
            }
            else if(a[i]>a[i-1])
            {
                g=1;
                if(s==1)
                {
                    c[j] = a[i-1];
                    j++,  s = 0,  ck++;

                    if(i==n-1){
                        c[j] = a[i];
                        ck++;
                    }
                }
                else if(i == n-1)
                {
                    c[j] = a[i];
                    j++, ck++;
                }
            }
            else
            {
                s=1;
                if(g==1)
                {
                    c[j] = a[i-1];
                    j++, g = 0, ck++;

                    if(i==n-1){
                        c[j] = a[i];
                        ck++;
                    }
                }
                else if(i == n-1)
                {
                    c[j] = a[i];
                    j++;
                    ck++;
                }
            }
        }

        cout << ck << endl;
        for(i=0; i<ck; i++)
            cout << c[i] <<" ";
        cout << endl;
    }



    return 0;
}


