#include <iostream>
#include <math.h>
using namespace std;

// AIM : MATRIX MULTIPLICATION

int main()
{

    int n, m, o;
    cin >> n >> m >> o;
    int arr1[n][m];
    int arr2[m][o];
    int arr3[n][o];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < o; k++)
            {
                arr3[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}