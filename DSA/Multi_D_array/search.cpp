#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    int i = 0, j = 4 - 1;
    int key = 17;
    while (i < 4 && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "Found at index " << i << " " << j;
            break;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}