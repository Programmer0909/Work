#include <bits/stdc++.h>
using namespace std;
int dp[100001] = {0};
int sol(int n, int k)
{
    if (n <= 0)
        return 1;
    if (dp[n] != 0)
        return dp[n];
    int ans = 0;
    for (int i = 1; i <= k; i++)
        if ((n - i) >= 0)
            ans += sol(n - i, k);
    return dp[n] = ans;
}
int main()
{
    cout << sol(5, 3) << endl;
    for (int i = 0; i <= 4; i++)
        cout << dp[i] << " ";
    return 0;
}