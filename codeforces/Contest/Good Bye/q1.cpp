// #include <bits/stdc++.h>
// using namespace std;
// #define int int long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl

// int ch()
// {
//     unsigned int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
//     string s;
//     cin >> n >> a;
//     int arr[n];
//     // priority_queue <int> first;
//     priority_queue <int, vector<int>, greater<int> > first;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         first.push(arr[i]);
//     }
//     // sort(arr, arr + n);
//     // int temp[a];
//     // for (int i = 0; i < a; i++)
//     // {
//     //     cin >> temp[i];
//     // }
//     // sort(temp, temp + a);
//     // for (int i = 0; i < a; i++)
//     // {
//     //     if(i<n ){
//     //     res -= arr[i];
//     //     res += temp[a - i - 1];}
//     // }
//     // cout << res el;
//     for (int i = 0; i < a; i++)
//     {
//         first.pop();
//         int m;cin >>m;
//         first.push(m);
//         cout << first.size() el;
//     }
//     cout << endl;
//     for (int i = 0; i < first.size(); i++)
//     {
//         res+=first.top();
//         first.pop();
//     }
//     cout << res el;
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

#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
  int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = INT_MAX;
  string s;
  cin >> n >> a;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int temp[a];
  for (int i = 0; i < a; i++)
  {
    cin >> temp[i];
  }
  // sort(arr,arr+n);
  sort(temp, temp + a);
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[j] < mini)
      {
        mini = arr[j];
        c = j;
      }
    }
    arr[c] = temp[i];
    mini = INT_MAX;
    c = 0;
    // res -= mini;
    // res += temp[a - i - 1]
  }
  for (int i = 0; i < n; i++)
  {
    res += arr[i];
  }
  cout << res el;
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