#include <bits/stdc++.h>
using namespace std;

// AIM :

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

int last_bin(int arr[], int n, int x)
{
    int h = n, l = 0;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid + 1] == x)
            {
                l = mid + 1;
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

int total(int arr[], int n, int x)
{
    int a = first_bin(arr, n, x);
    if (a == -1)
    {
        return -1;
    }
    else
    {
        return (last_bin(arr, n, x) - a + 1);
    }
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
    cout << total(arr , n ,x);
    return 0;
}