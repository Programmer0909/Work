#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int ct = 0;
    int n;
    cin >> n;
    ct++;
    int mat1[n][n];
    // memset(mat1,sizeof(mat1),4);
    int mat2[n][n];
    for (int i = 0; i < n; i++)
    {
        ct++;
        for (int j = 0; j < n; j++)
        {
            mat1[i][j] = i * 10 + j;
            ct++;
            ct++;
        }
        ct++;
    }
    ct++;
    cout << "MAT 1 " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose is : " << endl;
    int res[n][n];

    for (int i = 0; i < n; i++)
    {
        ct++;
        for (int j = 0; j < n; j++)
        {
            ct++;
            res[i][j] = mat1[j][i];
            ct++;
        }
        ct++;
        // cout << endl;
    }
    ct++;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    ct++;
    cout << ct << endl;
    return 0;
}