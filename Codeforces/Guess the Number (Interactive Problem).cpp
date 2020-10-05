#include <bits/stdc++.h>
using namespace std;

int ask()
{
    int low = 1, high = 1000000, mid, ans;
    string s;

    while(low<=high)
    {
        mid = (low+high)/2;

        cout << mid << endl;
        cin >> s;
        cout.flush();

        if(s == "<")
            high = mid - 1;
        else
            low = mid + 1;
    }

    return high;
}
int main()
{
    int ans;

    ans = ask();

    cout <<"! " << ans << endl;

    return 0;
}

