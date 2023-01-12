// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// int main()
// {
//     string n;
//     cin >> n;
//     int arr[256] ;
    
//     for (int i = 0; i < 256; i++)
//     {
//     //   cout << arr[i] << " ";
//     arr[i]=-1;
//     }
    
//     // for (int i = 0; i < 256; i++)
//     // {
//     //   cout << arr[i] << " ";
//     // }
//     int res = INT_MAX;
//     for (int i = 0; i < n.length(); i++)
//     {
//         if (arr[n[i]] == -1)
//         {
//             arr[n[i]] = i;
//         }
//         else
//         {
//             res = min(res, arr[n[i]]);
//         }
//     }
//     if (res==INT_MAX)
//     {
//         return -1;
//     }
//     else
//     {
//         return s[res];
//     }
    
//     (res==INT_MAX)?(return -1):( return s[res]);
//     cout << res;
//     return 0;
// }