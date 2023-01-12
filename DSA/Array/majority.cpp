#include <bits/stdc++.h>
using namespace std;

// AIM : An element is called a majority if it occurs more than n/2 times;

int find_majority(int arr[], int n)
{
    int ct = 1, res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == res)
        {
            ct++;
        }
        else
        {
            ct--;
        }
        if (ct == 0)
        {
            ct = 1;
            res = arr[i];
        }
    }
    ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == res)
        {
            ct++;
        }
    }
    if (ct <= n / 2)
    {
        return -1;
    }

    return res;
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
    cout << find_majority(arr, n);
    return 0;
}