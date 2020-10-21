#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, p_sum, n_sum;

    cin >> t;

    while(t--)
    {
        cin >> n;

        int a[n];

        p_sum = n_sum = 0;

        for(i=0; i<n; i++){
            cin >> a[i];

            if(a[i]>=0)
                p_sum += a[i];
            else
                n_sum += a[i];
        }

        if((p_sum+n_sum) == 0)
            cout << "NO" << endl;

        else{
            sort(a, a+n);
            cout << "YES" << endl;

            if(abs(p_sum)>abs(n_sum)){
                for(i=n-1; i>=0; i--)
                    cout << a[i] << " ";
                cout << endl;
            }else{
                for(i=0; i<n; i++)
                    cout << a[i] << " ";
                cout << endl;
            }
        }
    }

    return 0;
}
