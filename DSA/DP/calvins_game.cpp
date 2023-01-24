#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k;
    cin >> n >> k;
    int dp[n + 1] = {0};
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    dp[k - 1] = 0;
    dp[k] = dp[k - 1] + arr[k];
    int ans = 0;
    for (int i = k + 1; i < n; i++)
        dp[i] = arr[i] + max(dp[i - 1], dp[i - 2]);
    ans = dp[n - 1];
    int temp[n + 1] = {0};
    reverse(arr, arr + n);
    temp[0] = 0;
    temp[1] = arr[1];
    for (int i = 2; i < n; i++)
        temp[i] = arr[i] + max(temp[i - 1], temp[i - 2]);
    ans += temp[n - 1];
    cout << ans << endl;

    return 0;
}