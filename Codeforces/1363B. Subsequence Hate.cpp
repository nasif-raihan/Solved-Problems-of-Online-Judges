#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, T;
    string s;

    cin >> T;

    while(T--)
    {
        cin >> s;

        n = s.size();

        int front_one, front_zero, back_one, back_zero, ans=1e4;

        ///111000
        ///000111

        for(i=0; i<n; i++)
        {
            front_one = front_zero = back_one = back_zero = 0;

            for(j=0; j<i; j++)
                if(s[j] == '1') front_one++;
                else    front_zero++;

            for(j=i; j<n; j++)
                if(s[j] == '1') back_one++;
                else    back_zero++;

            ans = min(ans, front_one+back_zero);
            ans = min(ans, front_zero+back_one);
        }

        cout << ans << endl;
    }

    return 0;
}

