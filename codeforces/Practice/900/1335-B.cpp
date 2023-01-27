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
    int n, a, b, res = 0, maxi = 0, mini = 0;
    string s = "";
    cin >> n >> a >> b;
    for (int i = 0; i < b; i++)
        s += char(97 + i);
    // cout << "S at stage 1 " << s << endl;
    char ch = s[b - 1];
    for (int i = 0; i < a - b; i++)
        s += ch;
    // cout << "S at stage 2 " << s << endl;
    
    string temp = s;
    for (int i = 0; i < (n / a)-1; i++)
        s += temp;
    // cout << "S at stage 3 " << s << endl;
    
    for (int i = 0; i < n % a; i++)
        s += temp[i];
    // cout << "S at stage 4 " << s << endl;
    
    cout << s << endl;

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