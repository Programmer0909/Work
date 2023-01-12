// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl
// int main()
// {
//     std::cout << std::fixed << std::setprecision(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll int n, ct = 0, res;
//     vector<ll int> temp;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         if ((n - (i * 7)) % 4 == 0)
//         {
//             res = i;
//             break;
//         }
//     }
//     for (int j = 0; j < (((n)-res * 7) / 4); j++)
//         temp.push_back(4);
//     while (res--)
//         temp.push_back(7);
//     for (int i = 0; i < temp.size(); i++)
//         n -= temp[i];
//     if (n == 0)
//     {
//         for (int i = 0; i < temp.size(); i++)
//             cout << temp[i];
//     }
//     else
//         cout << -1 el;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, ct = 0, res;
    vector<ll int> temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if ((n - (i * 4)) % 7 == 0)
        {
            res = i;
            break;
        }
    }
    for (int j = 0; j < (((n)-res * 4) / 7); j++)
        temp.push_back(7);
    while (res--)
        temp.push_back(4);
    for (int i = 0; i < temp.size(); i++)
        n -= temp[i];
    if (n == 0)
    {
        for (int i = 0; i < temp.size(); i++)
            cout << temp[temp.size()-i-1];
    }
    else
        cout << -1 el;
    return 0;
}