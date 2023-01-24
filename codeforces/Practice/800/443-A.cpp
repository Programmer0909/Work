#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    string n;
    set<char> s;

    while (cin >> n)
    {
        if (n == "{}")
        {
            cout << 0 << endl;
            return 0;
        }
        for (int i = 0; i < n.length(); i++)
            s.insert(n[i]);
    }
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    int a = ((s.size() - 3) > 0) ? ((s.size() - 3)) : (0);
    if(s.find(',')!=s.end()) cout << a << endl;
    else cout << a+1 << endl;
    // cout << a;
    return 0;
}