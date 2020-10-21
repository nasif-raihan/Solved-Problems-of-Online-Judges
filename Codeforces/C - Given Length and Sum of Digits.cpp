
#include<bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    long long i, m, s, n, ck, value, digit_sum;

    cin >> m >> s;

    if(m == 1 && s == 0)
        cout << "0 0" << endl;
    else if(9*m < s || s == 0)
        cout << "-1 -1" << endl;
    else
    {
        digit_sum = s, n = m-1, ck=0;
        for(i=0; i<m; i++)
        {
            value = 9*n;
            if(value < digit_sum)
            {
                a[i] = digit_sum-value;
                digit_sum = value;
                n--;
            }
            else
            {
                if(digit_sum <= 9 && i == m-1)  a[i] = digit_sum ;
                else if(digit_sum <= 9 && ck==1)  a[i] = 0 ;
                else
                {
                    if(ck == 0)
                    {
                        a[i] = 1 ;
                        digit_sum = digit_sum-1;
                        ck = 1, n--;
                    }
                    else
                    {
                        a[i] = 9;
                        digit_sum = digit_sum-9;
                        n--;
                    }

                }
            }
        }

        sort(a, a+m);

        ///smaller
        int j, first_value;
        for(i=m-1; i>=0; i--)
        {
            if(a[i] != 0)
                j = i, first_value = a[i];
            else
                break;
        }

        cout << first_value ;
        for(i=0; i<m; i++)
        {
            if(i != j)
                cout << a[i];
        }
        cout << " ";

        ///largest
        for(i=0; i<m; i++)
        {
            if(s>=9)
            {
                s = s-9;
                cout << 9 ;
            }
            else if(s>0)
            {
                cout << s ;
                s = 0;
            }
            else    cout << 0 ;
        }
        cout << endl;

    }

    return 0;
}
