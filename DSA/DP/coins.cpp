#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
int sol(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (m[n] != 0)
        return m[n];
    return m[n] = max(n, sol(n / 2) + sol(n / 3) + sol(n / 4));
}

// AIM :
int main()
{
    int n;
    cin >> n;
    // int dp[1000000000];
    // dp[0] = 0;
    // dp[1] = 1;
    // dp[2] = 2;
    // for (int i = 3; i <= n; i++)
    //     dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
    // cout << dp[n] << endl;
    cout << sol(n) << endl;
    return 0;
}