#include <bits/stdc++.h>
using namespace std;

// AIM :

int pkel(int arr[], int n)
{
    int l = 0, h = n, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if ( arr[mid - 1] >= arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << pkel(arr, n);
    return 0;
}