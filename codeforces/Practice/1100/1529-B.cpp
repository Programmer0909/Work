#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, ct, res = 0, maxi = 0, mini = 0;
    // string s;
    cin >> n;
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // if(arr[i]==(s[s.size()]))
        s.insert(arr[i]);
    }
    mini = *min_element(arr, arr + n);
    maxi = *max_element(arr,arr+n);
    sort(arr, arr + n);
    int j = n-1;
    int t = maxi;
    
    for (int i = t; i>=mini; i--)
    {
        if (s.find(i) == s.end())
        {
            // cout << i << " " << arr[j] << " ";
            int x = 0;
            if ((arr[j] - i) >= 0)
                x = (arr[j] - i);
            res += x, j--, s.insert(i);
        }
        else j--;
    }
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