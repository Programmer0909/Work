#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, mid, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int h = n-1, l = 0;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            cout << mid << endl;
            return mid;
        }

        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << "-1" << endl;
    return 0;
}