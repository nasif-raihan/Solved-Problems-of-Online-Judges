#include<bits/stdc++.h>
using namespace std;

bool b[5],bb[5];

int main()
{
    long long i, j, k,ii, n, t, mn, ck;
    string s, s1;
    cin>>t;

    while(t--)
    {
        cin>>s;

        memset(b, 0, sizeof(b));

        n = s.size();

        k=1, mn = 2000000, ck=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')   b[1]=1;
            if(s[i]=='2')   b[2]=1;
            if(s[i]=='3')   b[3]=1;

            if(b[1]==1 && b[2]==1 && b[3]==1)
            {
                ck = 1;
                k = i+1;

                s1 = s.substr(0,k);
                //cout<<s1<<endl;
                memset(bb, 0, sizeof(bb));

                k=1;
                for(ii=s1.size()-1; ii>=0; ii--)
                {
                    if(s1[ii]=='1')   bb[1]=1;
                    if(s1[ii]=='2')   bb[2]=1;
                    if(s1[ii]=='3')   bb[3]=1;

                    if(bb[1]==1 && bb[2]==1 && bb[3]==1)
                    {
                        break;
                    }
                    k++;
                }

                mn = min(mn,k);
                k = 0;
                if(s[i]=='1')
                {
                    if(s[i-1]=='2')
                        b[3]=0;
                    else
                        b[2]=0;
                }
                if(s[i]=='2')
                {
                    if(s[i-1]=='3')
                        b[1]=0;
                    else
                        b[3]=0;
                }
                if(s[i]=='3')
                {
                    if(s[i-1]=='2')
                        b[1]=0;
                    else
                        b[2]=0;
                }
            }
            k++;
        }

        if(ck==0)    cout<<0<<endl;
        else
        {
            cout<<mn<<endl;
        }

    }


    return 0;
}

