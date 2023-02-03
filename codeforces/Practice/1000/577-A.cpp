#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    for (int i = 1; i <= min((double)n, sqrt(k)); i++)
        if ((k % i == 0) && ((k / i) <= n))
            (i==(k/i))?(res++):(res+=2);
    cout << res;
    return 0;
}