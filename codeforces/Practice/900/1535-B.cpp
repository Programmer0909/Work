#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((__gcd(arr[i],2* arr[j])> 1 || __gcd(2*arr[i],arr[j])> 1 ))
                res++;
    cout << res << endl;

    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}