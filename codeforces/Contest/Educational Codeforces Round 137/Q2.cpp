#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, max = 0, min = 0;
    cin >> n;
    string s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         swap(arr[i], arr[n - i-1]);
    //     }
    // }
    swap(arr[1],arr[n-1]);
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout el;
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