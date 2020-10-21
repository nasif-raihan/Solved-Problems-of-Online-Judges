#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, v, ck=0;
    string s, s1, s2, s3;
    cin>>s1>>s2>>s3;

    s = s1+s2;

    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    if(s3.size()!=s.size())  cout<<"NO"<<endl;
    else
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]!=s3[i])
            {
                ck = 1;
                break;
            }
        }

        if(ck)  cout << "NO" << endl;
        else    cout << "YES" << endl;
    }

    return 0;
}

