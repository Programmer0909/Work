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
    int arr[n][5];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                int d1 = i, d2 = j, c1 = 0, c2 = 0, c = 0;
                for (int k = 0; k < n; k++)
                {
                    if (arr[k][d1] == 1)
                        c1++;
                    if (arr[k][d2] == 1)
                        c2++;
                    if (arr[k][d1] == 0 && arr[k][d2] == 0)
                        c++;
                }
                if ((c1 >= (n / 2)) && (c2 >= (n / 2)) && c == 0)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
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