#include <bits/stdc++.h>
using namespace std;
int arr[5] = {2, 3, 5, 1, 4};
int dp[10][10] = {0};
int sol(int y, int beg, int end)
{
    if (beg == end)
        return arr[beg] * y;
    if (dp[beg][end] != 0)
        return dp[beg][end];
    int ans = max(arr[beg] * y + sol(y + 1, beg + 1, end),
                  arr[end] * y + sol(y + 1, beg, end - 1));
    return dp[beg][end] = ans;
}
int main()
{
    cout << sol(1, 0, 4) << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << dp[i][j] << "   ";
        cout << endl;
    }
    return 0;
}