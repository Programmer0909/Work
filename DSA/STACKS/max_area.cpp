#include <bits/stdc++.h>
using namespace std;

int getmaxarea(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j]) break;
                curr += arr[i];
        }
        for (int j = i - 1; j >= 0; j++)
        {
            if (arr[i] >= arr[j]) break;
                curr += arr[i];
        }
        // cout << curr << endl;
        res = max(curr, res);
    }
    return res;
}

// AIM :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getmaxarea(arr, n);
    return 0;
}