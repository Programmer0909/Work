#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1, n2 = r - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[n1 + i];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else 
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        i++;
        k++;
    }
}

void merge_so(int arr[], int l, int r)
{
    int mid = l + ((r - l) / 2);
    if (r > l)
    {
        merge_so(arr, l, mid);
        merge_so(arr, mid + 1, r);
        merge(arr, l, mid, r);
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

    merge_so(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << " j :" << arr[i] << " ";
    }
    return 0;
}