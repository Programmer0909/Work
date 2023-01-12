#include <bits/stdc++.h>
using namespace std;

// AIM : Sort an array to get all zeroes to the right . Time complexity : O(n)
int main()
{
    int arr[6] = {10, 8, 0, 0, 12, 0};
    int ct = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[ct]);
            ct++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}