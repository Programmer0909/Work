#include <bits/stdc++.h>
using namespace std;
int main(){string n;cin >> n;int ct = 1;for (int i = 1; i < n.length(); i++){(n[i] == n[i - 1])?(ct++):(ct=1);if (ct == 7){cout << "YES";return 0;}}cout << "NO";return 0;}
