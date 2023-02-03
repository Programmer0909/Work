#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil((1.0 * n) / a) * ceil((1.0 * m) / a)) << endl;
    // (n + a - 1) / a *((m + a - 1LL) / a);
    return 0;
}