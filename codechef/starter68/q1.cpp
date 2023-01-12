#include <bits/stdc++.h>
using namespace std;
#define intii int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = INT_MAX, maxi = 0, mini = 0;
    string s, res = "";
    cin >> n >> s;
    int arr[26]={0};
    map<string, int> m;
    map<char, int> count;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] != s[i + 1])
        {
            res += s[i];
            count[res[0]]++;
            m[res]++;
            res="";
        }
        else if (i == n - 1)
        {
            res += s[i];
            count[res[0]]++;
            m[res]++;
            res="";

        }
        else res += s[i];
        // cout << res el;
    }
    if(m.count(res)==0) m[res]++;

    for (auto i : m)
    {
        // string p =
        if (count[(i.first)[0]] > 1)
        {
            // ct = max(ct, (i.first).length());
            a = (i.first).length();
            if (a < ct && a!=0)
                ct = a;
        }
        // cout << i.first el;
    }
    if(m.size()==1) {cout << ceil(n/2.0) el; return 0;}
    cout << ct el;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define m 998244353
// #define int long long

// int32_t main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int one = 0, even = 1, odd = 1;
//         vector<int> e;
//         int product = 1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] == 1)
//                 one++;
//             else if (arr[i] & 1)
//                 product = (product * (arr[i] % m)) % m;
//             else
//             {
//                 e.push_back(arr[i]);
//             }
//         }

//         sort(e.begin(), e.end() , greater<int>());
//         while (one)
//         {
//             int en = e.size();
//             if (en != 0)
//             {
//                 product = (product * ((e[en-1] + 1) % m)) % m;
//                 e.pop_back();
//             }
//             else
//                 break;
//             one--;
//         }
//         for (int i : e)
//         {
//             product = (product * (i % m)) % m;
//         }
//         // product=(product*(odd%m))%m;
//         cout << product << "\n";
//     }
//     return 0;
// }
