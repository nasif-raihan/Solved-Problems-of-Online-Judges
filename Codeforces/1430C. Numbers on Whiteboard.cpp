#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, mid;

    cin >> t;

    while(t--)
    {
        cin >> n;

        bool b[n+1];

        memset(b, 0, sizeof(b));
        mid = n;

        cout << 2 << endl;

        i = 0;
        while(1)
        {
            if(mid == 2 && b[1] == 0){
                cout << "1 2" << endl;
                break;
            }
            else{

                if(i == 0)
                {
                    cout << mid << " " << mid-2 << endl;
                    b[mid] = 1;
                    b[mid-2] = 1;
                    mid = 2*mid-2;

                    if(mid%2 != 0)
                        mid = mid/2 + 1;
                    else
                        mid = mid/2;
                }
                else if(b[mid] == 0){
                    cout << mid << " " << mid << endl;
                    b[mid] = 1;

                    if(mid == 2)
                        break;
                }
                else{
                    if(mid-2 == 0)
                        break;

                    cout << mid << " " << mid-2 << endl;
                    b[mid-2] = 1;
                    mid = 2*mid-2;

                    if(mid%2 != 0)
                        mid = mid/2 + 1;
                    else
                        mid = mid/2;
                }
            }
            i++;
        }
    }

    return 0;
}
