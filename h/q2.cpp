#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int num[26], al[26] = {0}, sum = 0;
        for (int i = 0; i < 26; i++)
        {
            cin >> num[i];
        }
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            al[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (al[i] == 0)
            {
                sum += num[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}