#include <bits/stdc++.h>
using namespace std;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
// void solve(int n){
//     int dp[100] = {-1};
//     dp[1] = price[0];
//     for (int i = 1; i <= n; i++){
//         int ans = price[i - 1];
//         for (int j = 0; j < 8; j++) if(j<i)ans = max(ans, (i / arr[j]) * dp[i / arr[j]] + (i % arr[j]) * dp[i % arr[j]]);
//         dp[i] = ans;}
//     for (int i = 1; i <= n; i++) cout << dp[i] << " ";}

int solve(int n){
    if(n<=0) return 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int cur = i+1;
        ans = max(price[i] + maxpr) 
    }
    
}
int main(){
    solve(8);
    return 0;}