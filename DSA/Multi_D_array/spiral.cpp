#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    
    
           
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // cout << endl;

    int top = 0, bottom = 3, left = 0, right = 3;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int j = top; j <= bottom; j++)
        {
            cout << arr[j][right] << " ";
        }
        right--;
        for (int k = right; k >= left; k--)
        {
            cout << arr[bottom][k] << " ";
        }
        bottom--;
        for (int l = bottom; l >= top; l--)
        {
            cout << arr[l][left] << " ";
        }
        left++;
    }

    return 0;
}