#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k, T, ans;
    string s;

    cin >> T;

    while(T--)
    {
        cin >> n >> k >> s;

        int win[n], j = 0, count = 0;

        for(i=n-1; i>=0; i--)
        {
            if(s[i] == 'W')
                count++;
            else{
                win[j] = count;
                j++;
                count = 0;
            }
        }

        if(count)
        {
            win[j] = count;
            j++;
        }

        if(s[0] != 'W')
        {
            sort(win, win+j);
            ans = 0;


        } else {

        }
    }


    return 0;
}
