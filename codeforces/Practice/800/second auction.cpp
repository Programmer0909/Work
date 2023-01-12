#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, max = INT16_MIN, s_max = INT16_MIN, im = 0, ism = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max <= arr[i])
        {
            s_max = max;
            ism = im;
            max = arr[i];
            im = i;
        }
        else if (s_max < arr[i])
        {
            s_max = arr[i];
            ism = i;
        }
    }
    cout << im + 1 << " " << s_max;
    return 0;
}