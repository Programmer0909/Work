// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     // your code goes here
// // //     int T;
// // //     cin >> T;
// // //     for (int i = 0; i < T; i++)
// // //     {
// // //         int x, y, n, r, nz = 0, pz = 0;
// // //         cin >> x >> y >> n >> r;
// // //         if (r<(x*n))
// // //         {
// // //             cout << "-1" << endl;
// // //         }
// // //         else if (r>(y*n))
// // //         {
// // //             cout << "0 " << n << endl;
// // //         }
// // //         else
// // //         {
// // //             /* code */
// // //         }

// // //     }
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define vi vector<long long int>
// // #define mi map<long long int, long long int>
// // #define vii vector<long long int, long long int>
// // #define el << endl

// // int ch()
// // {
// //     ll int n, ct = 0, res = 0, max = 0, min = 0;
// //     // cin >> n>>res;
// //     // int arr[n];
// //     // for (int i = 0; i < n; i++)
// //     // {
// //     //   cin>>arr[i];
// //     // }
// //     // sort(arr,arr+n);
// //     // for (int i = 0; i < n; i++)
// //     // {
// //     //     if(arr[i]!=ct+1){
// //     //         res-=ct+1;
// //     //         i--;
// //     //     }
// //     // }

// //     string s;
// //     cin >> s;
// //     if (s.length() == 1)
// //         if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
// //             return 1;
// //         else
// //             return 0;
// //     else
// //         for (int i = 0; i < s.length() - 1; i++)
// //         {
// //             if(s[i]=='Y' || s[i]=='e' || s[i]=='s'){
// //             if (s[i] == 'Y' && s[i + 1] != 'e')
// //                 return 0;
// //             else if (s[i] == 'e' && s[i + 1] != 's')
// //                 return 0;
// //             else if (s[i] == 's' && s[i + 1] != 'Y')
// //                 return 0;}
// //             else return

// //         }
// //     return 1;
// // }

// // int main()
// // {
// //     std::cout << std::fixed << std::setprecision(0);
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
// //     ll int t;
// //     cin >> t;
// //     while (t--)
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl

// int ch()
// {
//     ll int n, temp, sum, ct = 0, res = 0, maxi = 0, mini = 0;
//     cin >> n >> sum;
//     string s;
//     int arr[n];
//     temp = n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         maxi += arr[i];
//     }
//     maxi+=sum;
//     n = (sqrt(8 * maxi + 1) - 1) / 2;
//     // cout << n << endl;
//     bool flag[n + 1];
//     for (int i = 0; i < n + 1; i++)
//     {
//         flag[i] = false;
//     }
//     for (int i = 0; i < temp; i++)
//     {
//         flag[arr[i]] = true;
//     }
//     int i = 1;
//     while (i <= n)
//     {
//         if (flag[i] == false)
//             sum -= i;
//         if (sum < 0)
//             return 0;
//         i++;
//     }
//     if (sum > 0)
//         return 0;

//     return 1;
// }

// int main()
// {
//     std::cout << std::fixed << std::setprecision(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll int t;
//     cin >> t;
//     while (t--)
//         ch() == 0 ? cout << "NO" el : cout << "YES" el;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, l, r, x, ct = 0, res = 0, max = 0, min = 0;
    cin >> l >> r >> x;
    string s;
    ll int a, b;
    cin >> a >> b;
    while (a != b)
    {
        if ((b - a) < x)
        {
            b += (x + (b - a));
            cout << b << endl;
            ct++;
            if (b > r)
            {
                b = r;
            cout << b << endl;

            }
        }
        else if ((b - a) > x)
        {
            cout << b << endl;

            ct++;
            break;
        }
    }

    cout << ct << endl;
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}