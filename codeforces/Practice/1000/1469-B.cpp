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
    int n, m, resa = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        maxi+=arr1[i];
        resa=max(resa,maxi);
    }
    int resb=0;
    maxi=0;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        // if(arr2[i] + maxi>0) 
        maxi+=arr2[i];
        resb=max(resb,maxi);
    }
    cout << max((long long)0,resa+resb) << endl;
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