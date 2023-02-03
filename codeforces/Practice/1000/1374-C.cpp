#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n>>s;
    stack<char> ch;
    for (int i = 0; i < s.length(); i++)
    {
        if (ch.empty() == false)
        {
            if (ch.top() == '(' && s[i] == ')')
                ch.pop();
            else
                ch.push(s[i]);
        }
        else
            ch.push(s[i]);
    }
    cout << ch.size() / 2 << endl;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}