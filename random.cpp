#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, m, maxi = INT_MIN, ind;
    cin >> n >> m;
    int arr[n];
    int ans = n - 1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i] << " " << m << endl;
        if (arr[i] > m)
        {
            flag = true;
        }
        if (flag == true && arr[i]>=maxi)
        {
            maxi = arr[i];
            ind = i;
        }
        // cout << ind << endl;
    }
    (flag == true) ? (cout << ind + 1) : (cout << n);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     bool flag = false;
//     vector<pair<int, int>> v;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         if (a > m)
//             flag = true;
//         pair<int, int> p = make_pair(a, i);
//         v.push_back(p);
//     }
//     if (flag == true)
//     {

//         for (auto i : v)
//         {
//             int ab = v.size();
//             if (ab == 1)
//                 cout << v[0].second + 1;
//             int a = i.first, b = i.second;
//             a -= m;
//             if (a <= 0)
//                 v.erase(remove(v.begin(), v.end(), i.first), v.end());
//             else
//             {
//                 pair<int, int> p = make_pair(a, b);
//                 v.push_back(p);
//             }
//         }
//     }
//     else
//         cout << n;
//     return 0;
// }