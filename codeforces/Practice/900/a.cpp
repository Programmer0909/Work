// #include <bits/stdc++.h>
// using namespace std;
// #define int int long long
// #define vi vector<int>
// #define mi map<int, int>
// #define vii vector<int, int>
// #define el << endl
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// int ch()
// {
//     int res = 0, maxi = 0, mini = 0;
//     string n;
//     cin >> n;
//     maxi = n.length();
//     string temp = "314159265358979323846264338327";
//     for (int i = 0; i < maxi; i++)
//     {
//         if (n[i] == temp[i])
//             res++;
//         else
//         {
//             cout << res << endl;
//             return 0;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }

// int32_t main()
// {
//     // std::cout << std::fixed << std::setprecision(30);
//     // fast
//     int t;
//     cin >> t;

//     while (t--)
//         ch();
//     return 0;
// }

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
    int n, a, b, c, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> a >> b >> c;
    if (c % (a - 1) == 0)
    {
        for (int i = 0; i < a - 1; i++)
        {
            cout << c / (a - 1) << " ";
        }
        cout << b - c;
    }
    else
    {
        for (int i = 0; i < c / (a - 1); i++)
        {
            cout << c/(a-1) << " ";
        }
        
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