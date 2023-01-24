#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int le = 0;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '4' || s[i] == '7')
                le++;
        if (le <= k)
            res++;
    }
    cout << res << endl;
    return 0;
}