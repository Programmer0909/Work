#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int dp[n + 1] = {0} , arr[n + 1] = {0};
    for (int i = 1; i <= n; i++) cin >> arr[i];
    dp[2] = dp[1] + abs(arr[2] - arr[1]);
    for (int i = 3; i <= n; i++) dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    cout << dp[n] << endl;
    return 0;}