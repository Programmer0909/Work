#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int che[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        che[i] = arr[i];
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(che, che + n);
    for (int i = 0; i < n - 1; i++)
        if (che[i] == arr[i])
            swap(che[i], che[i+1]);
    if (che[n - 1] == arr[n - 1])
        swap(che[n - 2], che[n - 1]);
    for (int i = 0; i < n; i++)
        cout << che[i] << " ";
    cout << endl;
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