#include <bits/stdc++.h>
using namespace std;

// AIM :

int dp[100][100] = {0};
int sol(int n){
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]);
        }
        
    }
    return dp[n][n];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[1][i] = 1;
        dp[i][1] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << sol(n) << endl;
    return 0;
}