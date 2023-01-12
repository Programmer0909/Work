#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n, k,a;
    cin >> n >> k;
    a=(n+1)/2;
    (k <= a) ? (cout << 2 * k - 1) : (cout << 2 * (k - a));
    return 0;
}