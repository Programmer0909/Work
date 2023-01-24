#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, ct1 = 0, ct2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            ct1++;
        else
            ct2++;
    }
    if (ct1 > ct2)
        cout << "Anton";
    else if (ct1 == ct2)
        cout << "Friendship";
    else
        cout << "Danik";
    return 0;
}