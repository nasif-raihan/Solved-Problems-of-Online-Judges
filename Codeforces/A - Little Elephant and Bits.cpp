#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n;
    string s;

    cin>>s;
    n = s.size();

    for(i=0; i<n; i++)
    {
        if(s[i]=='0'){
            s.erase(s.begin()+i);
            break;
        }
        else if(i== n-1)
            s.erase(s.begin()+i);
    }

    cout<<s<<endl;

    return 0;
}

