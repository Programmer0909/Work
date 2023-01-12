#include <bits/stdc++.h>
using namespace std;
#define long long ll;
// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = INT16_MIN, res = 0, k, pos = 1;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            maxi = max(maxi, arr[i]);
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        while (i < n && k > 0)
        {
            if (arr[i] == pos)
            {
                pos++;
            }
            else
            {
                res += (maxi - pos);
                arr.push_back(pos);
                maxi = max(pos, maxi);
                pos++;
                k--;
            }
            i++;
        }
        while (i >= n && k != 0)
        {
             arr.push_back(pos);
            maxi = max(pos, maxi);
            res += (maxi - pos);
            k--;
            pos++;
        }
        cout << res << endl;
    }

    return 0;
}

