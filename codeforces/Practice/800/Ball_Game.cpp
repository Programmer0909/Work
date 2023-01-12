#include <bits/stdc++.h>
using namespace std;
#define long long ll;
// AIM :
int main()
{
    int t, r = 2;
    cin >> t;
    for (int i = 1; i < t; i++)
    {
        cout << r << " ";
        r += (i);
        r = r % t + 1;
    }

    return 0;
}