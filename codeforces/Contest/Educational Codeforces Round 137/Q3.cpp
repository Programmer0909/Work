#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, temp = 0, max = 0, min = 0;
    cin >> n;
    // string s;
    string lid;
    cin >> lid;
    char pid[n];
    ll int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        pid[i] = lid[i];
        if (lid[i] == '0' && ct == 0)
        {
            temp = arr[i];
            ct++;
        }
    }
    int i = 1;
    while (i < n)
    {
        if (pid[i-1] == '0' )
        {
            temp = arr[i];
        }
        else if (pid[i] == '1')
        {
            // int a= max(arr[i],arr[i-1]);
            // if (arr[i - 1] >= arr[i] || ((arr[i+1]<=arr[i-1]) && pid[i+1]=='1'))
            // {
            //     // res += arr[i - 1];
            //     // cout << res el;
            //     swap(pid[i], pid[i - 1]);
            // }
            // // else
            // // {
            // //     // res += arr[i];
            // //     // swap(pid[i], pid[i - 1]);

            // // }
            // // cout << res el;
            // ll int y = max(arr[i],temp);
            (arr[i] > temp) ? (res += arr[i]) : (res += temp);
        }

        i++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //   if (pid[i]=='1')
    //   {
    //     res+=arr[i];
    //   }

    // }

    // for (int i = 0; i < n; i++)
    // {
    //   cout << pid[i] << " ";
    // }

    cout << res el;
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

// #include <bits/stdc++.h>
// using namespace std;
// long long t, n, ans, magz[2000005], ma;
// string lid;
// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         cin >> lid;
//         for (int i = 1; i <= n; ++i)
//             cin >> magz[i];
//         ans = 0;
//         ma = 0;
//         for (int i = 1; i <= n; ++i)
//         {
//             if (lid[i - 1] == '0')
//                 ma = magz[i];
//             else
//             {
//                 if (magz[i] < ma)
//                 {
//                     ans += ma;
//                     ma = magz[i];
//                 }
//                 else
//                     ans += magz[i];
//             }
//         }
//         cout << ans << endl;
//     }
// }