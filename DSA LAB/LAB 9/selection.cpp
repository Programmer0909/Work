#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = INT_MAX;
        int min_idx = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < temp)
            {
                temp = arr[j];
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
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
    selection(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}