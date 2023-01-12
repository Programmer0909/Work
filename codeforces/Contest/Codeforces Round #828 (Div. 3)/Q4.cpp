#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                while (a[i] % 2 == 0)
                {
                    a[i] /= 2;
                    cnt++;
                }
            }
        }
        if (cnt >= n) cout << 0 << endl;
        else
        {
            int left = n - cnt;
            vector<int> v;
            for (int i = 2; i <= n; i += 2)
            {
                int cnt2 = 0;
                int j = i;
                while (i % 2 == 0)
                {
                    i /= 2;
                    cnt2++;
                }
                v.push_back(cnt2);
                i = j;
            }
            sort(v.begin(), v.end(), greater<int>());
            int i = 0;
            while (left > 0 and i < v.size())
            {
                left -= v[i];
                i++;
            }
            if (left > 0)
                cout << "-1\n";
            else
                cout << i << "\n";
        }
    }
    return 0;
}