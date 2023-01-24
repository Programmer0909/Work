#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    string s, t;
    int res = 0;
    cin >> s >> t;
    for (int i = 0; i < t.length(); i++)
        if (t[i] == s[res])
            res++;
    cout << res + 1 << endl;
    return 0;
}