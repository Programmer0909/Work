#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2 = "";
    getline(cin, s1);
    int ct = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != ' ')
            s2 = s2 + s1[i];
        else
        {
            if (ct % 2 == 0)
            {
                int ti = i - s2.length();
                for (int j = 0; j < s2.length(); j++)
                    s1[ti + j] = s2[s2.length() - j - 1];
            }
            ct++;
            s2 = "";
        }
    }
    cout << s1 << endl;
    return 0;
}