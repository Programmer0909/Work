#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, k, m, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> k >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    vector <int> v;
    while (i < n && j < m)
    {
        if (a[i] == 0)
        {
            v.push_back(a[i]);
            k++, i++;
            continue;
        }
        else if (a[i] <= k)
        {
            v.push_back(a[i]);
            i++;
            continue;
        }
        if (b[j] == 0)
        {
            v.push_back(b[j]);
            k++, j++;
            continue;
        }
        else if (b[j] <= k)
        {
            v.push_back(b[j]);
            j++;
            continue;
        }

        cout << -1 << endl;
        return 0;
    }

    while (i < n)
    {
        if (a[i] == 0)
        {
            v.push_back(a[i]);
            k++, i++;
            continue;
        }
        else if (a[i] <= k)
        {
            v.push_back(a[i]);
            i++;
            continue;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    while (j < m)
    {
        if (b[j] == 0)
        {
            v.push_back(b[j]);
            k++, j++;
            continue;
        }
        else if (b[j] <= k)
        {
            v.push_back(b[j]);
            j++;
            continue;
        }

        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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