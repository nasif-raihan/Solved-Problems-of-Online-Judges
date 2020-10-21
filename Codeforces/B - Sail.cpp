#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, t, sx, fx, sy, fy, x_axis, y_axis, done=0;
    string s;

    cin >> t >> sx >> sy >> fx >> fy >> s;

    x_axis = fx - sx ;
    y_axis = fy - sy ;

    for(i=0; i<t; i++)
    {
        if(x_axis > 0)
            if(s[i] == 'E')
                x_axis--;

        if(x_axis < 0)
            if(s[i] == 'W')
                x_axis++;

        if(y_axis > 0)
            if(s[i] == 'N')
                y_axis--;

        if(y_axis < 0)
            if(s[i] == 'S')
                y_axis++;

        if(x_axis == 0 && y_axis == 0)
        {
            done = 1;
            break;
        }
    }


    if(done)    cout << i+1 << endl;
    else    cout << -1 << endl;
    return 0;
}

