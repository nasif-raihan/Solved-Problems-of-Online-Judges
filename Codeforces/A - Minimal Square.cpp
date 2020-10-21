#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, T, ans;

    cin>>T;

    while(T--)
    {
        cin>>a>>b;

        if(a<b)
            swap(a,b);

        ans = max(a, b+b);

        cout<<ans*ans<<endl;
    }

    return 0;
}

