#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int mat[n][n][n];
    // Input array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> mat[i][j][k];
            }
        }
    }
    // "Lower triangular "
    cout << "Lower triangular " << endl;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i <= j)
                    cout << mat[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;

    }

    // "Upper triangular
    cout << "Upper triangular " << endl;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i >= j)
                    cout << mat[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}