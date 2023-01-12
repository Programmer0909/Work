#include <bits/stdc++.h>
using namespace std;

// nIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = 0;
        cin >> n;
        vector<signed long long int> arr;
        int ct = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                ct++;
                maxi = max(ct, maxi);
            }
            else
            {
                ct = 1;
            }
        }
        if (n % 2 == 0)
        {
            (maxi <= ((n) / 2)) ? (cout << "Yes" << endl) : cout << "No" << endl;
        }
        if (n % 2 != 0)
        {
            (maxi <= ((n + 1) / 2)) ? (cout << "Yes" << endl) : cout << "No" << endl;
        }
    }

    return 0;
}