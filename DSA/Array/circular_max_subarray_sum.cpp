#include <bits/stdc++.h>
using namespace std;

// AIM :

int check(int arr[], int n)
{
    int res = 0, temp = 0;
    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        temp = max(arr[i], (arr[i] + temp));
        res = max(temp, res);
    }
    return res;
}

int main()
{
    int n, f1, f2, l;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f1 = check(arr, n);
    l = arr[n - 1];
    for (int i = n - 1; i > 0; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = l;
    f2 = check(arr, n);
    l = max(f1, f2);
    cout << l;
    return 0;
}