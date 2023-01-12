#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    if (s.length() != n)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        char a = s[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i] && s[j] != s[i])
            {
                /* code */
                cout << "NO" el;
                return 0;
            }
        }
    }
    cout << "YES" el;
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
    {
        ch();
    }
    return 0;
}