#include <bits/stdc++.h>
using namespace std;
// INSERION SORT
// AIM : BEST CASE : THETA N; WORST CASE : THETA N^2 ;GENERAL : O(N^2)
int main()
{
    int arr[] = {3, 7, 3, 7, 0, 6, 32, 4, 8, 0, 6, 4, 6, 90, 0, 1};
    int n = 16;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}