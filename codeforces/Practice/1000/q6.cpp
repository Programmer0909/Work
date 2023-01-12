#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, r = 0, maxi = 0, mini = 0;
    string s, tem = "", res = "";
    cin >> a >> s;
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (auto j : m)
    {
        if (j.second % a != 0)
        {
            cout << -1 el;
            return 0;
        }
        else
        {
            while (c < j.second / a)
                tem += j.first, c++;
            c=0;
        }
    }
    for (int i = 0; i < a; i++)
        res += tem;
    cout << res el;
    return 0;
}
int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ch();
    return 0;
}