
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, T, L,R,U,D, ck, LR_dif, UD_dif;
    string s;

    cin>>T;

    while(T--)
    {
        cin>>s;
        n = s.size();

        L=0, R=0, U=0, D=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='L')   L++;
            if(s[i]=='R')   R++;
            if(s[i]=='U')   U++;
            if(s[i]=='D')   D++;
        }

        ck = 0;
        if((R>0 && (L==0 && U==0 && D==0)) || (L>0 && (R==0 && U==0 && D==0)) || (U>0 && (R==0 && L==0 && D==0)) || (D>0 && (R==0 && U==0 && L==0)))
                                                             /*cout<<"hi1"<<endl, */ck = 1;
        else if((R>0 && U>0 && (L==0 && D==0)) || (R>0 && D>0 && (L==0 && U==0)) || (L>0 && U>0 && (R==0 && D==0)) || (L>0 && D>0 && (R==0 && U==0)))
                                                                          /*cout<<"hi2"<<endl, */ck=1;


        //cout<<"ck : "<<ck<<endl;

        if(ck)  cout<<0<<endl;
        else
        {
            LR_dif = abs(L-R);
            UD_dif = abs(U-D);

            if(L>R) L = R;
            else    R = L;

            if(U>D) U = D;
            else    D = U;

            int DU=0, RL=0;

            if((R>0 && U==0) || (U>0 && R==0))
            {
                cout<<2<<endl;

                if(D>0)
                    cout<<"DU",  D--, U--, DU=1;
                else if(R>0)
                    cout<<"RL", R--,L--, RL=1;
                cout<<endl;
                continue;
            }

            else
            {

                cout << n - (LR_dif + UD_dif) << endl;

                if(R>0)
                {
                    for(i=0; i<R; i++)
                        cout<<"R";
                }

                if(U>0)
                {
                    for(i=0; i<U; i++)
                        cout<<"U";
                }

                if(L>0)
                {
                    for(i=0; i<L; i++)
                        cout<<"L";
                }

                if(D>0)
                {
                    for(i=0; i<D; i++)
                        cout<<"D";
                }
            }
            cout<<endl;
        }
    }


    return 0;
}
