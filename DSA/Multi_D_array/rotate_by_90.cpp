#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < 4 / 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            swap(arr[i][j], arr[4 - i - 1][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}