#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;cin >> n;int arr[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
    for (int o = 0; o < n; o++) for (int j = 0; j < n; j++) if (o == j || o + j == n - 1 || o == (n - 1) / 2 || j == (n - 1) / 2) sum += arr[o][j];
    cout << sum;
    return 0;}