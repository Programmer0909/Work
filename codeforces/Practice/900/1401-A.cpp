#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, k, res = 0, maxi = 0, mini = 0;
    int a, b;
    string s;
    cin >> n >> k;
    if (n < k)
        cout << k - n << endl;

    else if (n % 2 == k % 2)
        cout << 0 << endl;

    else
        cout << 1 << endl;
    return 0;


}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}