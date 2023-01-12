// #include <bits/stdc++.h>
// using namespace std;
// #define int int long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl
// int ch()
// {
//     int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
//     string s;
//     cin >> n;
//     bool arr[n];
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = false;
//         cin >> a;
//         if (a == 0)
//             arr[i] = true, flag = true;
//     }
//     for (int i = 0; i < n - 1; i++)
//         if (arr[i] != arr[i + 1])
//             ct++;
//     if (ct == 0)
//     {
//         if (flag == true)
//             cout << 0 el;
//         else
//             (cout << 1 el);
//     }
//     else if (ct == 1 || ct == 2)
//         cout << 1 el;
//     else
//         cout << 2 el;
//     return 0;
// }

// int32_t main()
// {
//     std::cout << std::fixed << std::setprecision(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//         ch();
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int t, n, z;
    cin >> t;
    while (t--)
    { 
        int p = 0, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> z;
            if (z != 0 && c == 0 && p != 2)
            {
                c = 1;
                p = 1;
            }
            else if (z == 0 && c == 1 && p != 2)
            {
                c = 2;
            }
            else if (z != 0 && c == 2)
            {
                p = 2;
            }
        }
        cout << p << endl;
    }
    return 0;
}
