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
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if (i != (n - 1))
        {
            if (s1[i] != s2[i])
                res += 2;
            else if (s1[i + 1] != s2[i + 1])
            {
                if (s1[i] == '0')
                    res++;
            }
            else if (s1[i] != s2[i])
            {
                if (s1[i] == '0')
                    res++;
            }
            else
            {
                res += 2, i++;
            }
        }
        else
        {
            if (s1[i] != s2[i])
                res += 2;
            else if (s1[i] == '0')
                res++;
        }
        // cout << i << " " <<res << endl;
    }
    cout << res << endl;
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