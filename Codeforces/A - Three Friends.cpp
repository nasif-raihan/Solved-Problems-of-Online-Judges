#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, T, abc[3];

    cin >> T;

    while(T--)
    {
        for(i=0; i<3; i++)
            cin >> abc[i];

        sort(abc, abc+3);

        if(abc[0]==abc[1] && abc[0] != abc[2])
        {
            abc[0]++;
            abc[1]++;

            if(abc[2]>abc[0])   abc[2]--;
        }
        else if(abc[0]!=abc[1] && abc[1]==abc[2])
        {
            abc[0]++;

            if(abc[0]<abc[1])   abc[1]--, abc[2]--;
        }
        else
        {
            if(abc[0]<abc[1])   abc[0]++;
            if(abc[0]<abc[2])   abc[2]--;
        }

        cout << 2*(abc[2]-abc[0]) << endl;
    }

    return 0;
}

