#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
string p, h;
bool read()
{
    if (!(cin >> p >> h))
        return false;
    return true;
}
void solve()
{
    int n = h.size();
    vector<int> cntp(26);
    for (int i = 0; i < p.size(); i++) ++cntp[p[i] - 'a'];
    for (int i = 0; i < n; i++)
    {
        vector<int> cnth(26);
        for (int j = i; j < n; ++j)
        {
            ++cnth[h[j] - 'a'];
            if (cntp == cnth)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    forn(_, tc)
    {
        read();
        solve();
    }
    return 0;
}