#include <bits/stdc++.h>
using namespace std;

long long a[100];

int main()
{
    long long i, n, T;

    cin >> T;

    while(T--)
    {
        cin >> n;

        for(i=0; i<n; i++)
        {
            cin >> a[i];

            if(i!=0 && i%2){
                if(a[i] > 0)
                    a[i] = -a[i];
            }
            else{
                if(a[i] < 0)
                    a[i] = -a[i];
            }
        }


        for(i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}

