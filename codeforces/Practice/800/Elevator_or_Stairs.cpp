#include <bits/stdc++.h>
using namespace std;
int main(){int x1, x2, x3, t1, t2, t3;cin >> x1 >> x2 >> x3 >> t1 >> t2 >> t3;
((abs(x1 - x2) + abs(x1 - x3)) * t2 + 3 * t3) <= ((abs(x1 - x2)) * t1) ? (cout << "YES") : (cout << "NO");return 0;}