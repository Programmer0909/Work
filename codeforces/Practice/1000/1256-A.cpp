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
    int n, a, b, s, res = 0, maxi = 0, mini = 0;
    cin >> a >> b >> n >> s;
    int x = s % n;
    int k = (s-x)/n;
    if(k<=a) {
        if (x<=b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else
    {
        int temp = k-a;
        if((temp*n + x)<=b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

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