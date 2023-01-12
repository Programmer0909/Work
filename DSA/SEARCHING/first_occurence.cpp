#include <bits/stdc++.h>
using namespace std;

// AIM : First occurence of given number

int first_bin(int arr[], int n, int x)
{
    int h = n, l = 0;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid - 1] == x)
            {
                h = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    int n,x;
    cin >> n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << first_bin(arr , n , x);
    return 0;
}