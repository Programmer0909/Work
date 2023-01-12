#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        map<int, int> m1, m2;
        for (int i = 2; i * i <= a; i++)
            if (a % i == 0)
                while (a % i == 0)
                    a /= i, m1[i]++;
        if (a > 1)
            m1[a]++;
        for (int i = 2; i * i <= b; i++)
            if (b % i == 0)
                while (b % i == 0)
                    b /= i, m2[i]++;
        if (b > 1)
            m2[b]++;

        if (m1.size() != m2.size())
        {
            cout << "NO\n";
            continue;
        }

        float r = -1;
        bool ok = true;
        for (pair<int, int> p : m1)
        {
            int prime = p.first;
            int freq = p.second;
            if (m2[prime] == 0)
            {
                ok = false;
                break;
            }
            if (r == -1)
                r = ((float)freq) / ((float)m2[prime]);
            float r2 = ((float)freq) / ((float)m2[prime]);
            if (r != r2)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }


    return 0;
}