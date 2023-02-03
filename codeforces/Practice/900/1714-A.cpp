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
    int n, a, b, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n >> a >> b;
    vector<int> v;
    int temp = a * 60 + b;
    v.push_back(a * 60 + b);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(a * 60 + b);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        if (v[i] == temp)
        {
            if ((i != (v.size() - 1)))
                res = v[i + 1] - v[i];
            else
                res = 1440 - v[i] + v[0];
            // cout << res << endl;
            break;
        }
    }
    cout <<  res / 60 << " " << res % 60 << endl;
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