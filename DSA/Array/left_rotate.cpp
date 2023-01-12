#include <bits/stdc++.h>
using namespace std;

// AIM : Time = theta (N) : Space = Theta (1)

void reverseA(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rev(int arr[], int n, int d)
{
    reverseA(arr, 0, d - 1);
    reverseA(arr, d, n - 1);
    reverseA(arr, 0, n - 1);
}

int main()
{
    int n, d;
    cin >> n >> d;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}