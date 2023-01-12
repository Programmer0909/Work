#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

// int sol(int m, int n, int dp[10000][10000])
// {
//     if ()
// }

int ch()
{
    int m, p, n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> m >> n >> p;
    int dp[10000][10000] = {0};
    for (int i = 0; i < p; i++)
    {
        cin >> a >> b;
        dp[a][b] = -10;
    }
    for (int i = 1; i <= m; i++)
    {
        if (dp[i][1] == -10)
            break;
        else
            dp[i][1] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[1][i] == -10)
            break;
        else
            dp[1][i] = 1;
    }
    if (dp[m][n] == -10)
    {
        cout << 0 el;
        return 0;
    }
    for (int i = 2; i <= m; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            if (dp[i][j] == -10)
                continue;
            if (dp[i - 1][j] != -10 && dp[i][j - 1] != -10)
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;
            else if (dp[i - 1][j] != -10 || dp[i][j - 1] != -10)
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) % 1000000007;
        }
    }
    // cout << 11 << endl;

    cout << dp[m][n] el;
    // for (int i = 0; i <= m; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         // if (dp[i - 1][j] != -10 && dp[i][j - 1] != -10)
    //         //     dp[i][j] = 1 + max(dp[i - 1][j], dp[i][j - 1]);
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        ch();
    return 0;
}