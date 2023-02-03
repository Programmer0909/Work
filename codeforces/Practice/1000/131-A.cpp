#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 1; i < s.length(); i++)
        if (s[i] > 96)
            flag = false;
    if (flag == true)
    {
        if (s[0] > 96)
            s[0] = s[0] - 32;
        else s[0] = s[0] + 32;
        for (int i = 1; i < s.length(); i++)
            if (s[i] < 91)
                s[i] = s[i] + 32;
    }
    cout << s;

    return 0;
}