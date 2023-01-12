// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> arr[i][j];
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i + 1][0] == arr[i][0])
//         {
//             cout << 1;
//             cout << "NO";
//             return 0;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m-1; j++)
//         {
//             if (arr[i][j] != arr[i][j + 1])
//             {
//                 cout << 2<<endl;
//                 cout << i+1 << j+1 << endl;
//                 cout << "NO";
//                 return 0;
//             }
//         }
//     }
//     cout << "YES";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x = 1;
    cin >> n >> m;
    char c = 0;
    while (n--)
    {
        char a;
        cin >> a;
        if (c == a)
            x = 0;
        c = a;
        for (int i = 1; i < m; i++)
        {
            cin >> a;
            if (a != c)
                x = 0;
        }
    }
    cout << (x == 0 ? "NO" : "YES");
    return 0;
}