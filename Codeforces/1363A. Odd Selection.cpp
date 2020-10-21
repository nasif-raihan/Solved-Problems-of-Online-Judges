
#include<bits/stdc++.h>
using namespace std;

int a[1000];
int main()
{
    int i, n, x, d, odd, even, T;

    cin>>T;

    while(T--)
    {
        cin >>n >> x;

        even = 0, odd = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]%2==0)
                even++;
            else
                odd++;
        }

        if(even == n)
            cout<<"No"<<endl;
        else if(x%2 == 0)
        {
            if(odd >= x)
            {
                if(even>=1)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else
            {
                d = x-odd;

                if(d%2==0)
                {
                    d = d+1;

                    if(d<=even)
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
            }
        }
        else
        {
            if(odd%2==1)
                cout<<"Yes"<<endl;
            else
            {
                if(odd>x)
                    cout<<"Yes"<<endl;
                else
                {
                    d = x-odd+1;

                    if(d<=even)
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
                }
            }
        }
    }

    return 0;
}
