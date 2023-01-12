#include <bits/stdc++.h>
using namespace std;

// AIM : USE WINDOW SLIDING TECHNIQUE

// GIVEN AN ARRAY AND RANGE OF SUBARRAY , FIND THE MAX SUM IN IT

int max_sum(int arr[], int n, int k)
{
    int cur_sum = 0, maxi = 0;
    for (int i = 0; i < k; i++)
    {
        cur_sum += arr[i];
    }
    maxi = cur_sum;
    for (int j = k; j < n; j++)
    {
        cur_sum += (arr[j] - arr[j - k]);
        maxi = max(maxi, cur_sum);
    }
    return maxi;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << max_sum(arr, n, k);
    return 0;
}