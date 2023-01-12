#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0, s, t, p1 = 0, p2 = 0;cin >> n;
    int arr[n + 1];arr[0] = 0;
    for (int i = 1; i < n+1; i++){cin >> arr[i];sum += arr[i];}
    cin >> s >> t;
    for (int i = min(s, t); i < max(s, t); i++) p1 += arr[i];
    p2 = sum - p1;cout << min(p1, p2);return 0;}