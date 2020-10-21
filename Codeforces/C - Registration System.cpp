#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, T;
    string s;

    cin>>T;

    map <string, long long> mp;

    for(i=0; i<T; i++)
    {
        cin>>s;

        if(mp[s] == 0)  cout<<"OK"<<endl;
        else    cout<<s<<mp[s]<<endl;

        mp[s]++;
    }

    return 0;
}

