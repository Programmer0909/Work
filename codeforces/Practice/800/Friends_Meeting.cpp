#include <bits/stdc++.h>
using namespace std;
int main(){int n, m, x, y, res = 0;cin >> n >> m;x = abs(n - ((n + m) / 2));res += (x * (x + 1)) / 2;y = abs(m - ((n + m) / 2));res += (y * (y + 1)) / 2;cout << res;return 0;}