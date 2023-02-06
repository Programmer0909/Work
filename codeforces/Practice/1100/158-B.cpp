#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, res = 0;
    int t[5] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        t[a]++;
    }
    res += t[4];
    int x = min(t[1], t[3]);
    res += x;
    t[1] -= x;
    t[3] -= x;
    res += t[3];
    // res+=(t[2]/2);
    res += (t[2] / 2);
    t[2] %= 2;
    res += (t[1] / 4);
    t[1] %= 4;
    if (t[2] == 1)
    {
        if (t[1] <= 2)
        {
            res++;
            cout << res << endl;
            return 0;
        }
        else
        {
            res += 2;
            cout << res << endl;
            return 0;
        }
    }
    if(t[1]==0) cout << res << endl;
    else cout << res+1 << endl;
    return 0;
}