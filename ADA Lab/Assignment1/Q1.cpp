#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ct = 0;
    // ct++;
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
        // cout << endl;
    }
    ct++;
    for (int i = 0; i < n; i++)
    {
        ct++;
        for (int j = 0; j < n; j++)
        {
            mat2[i][j] = i * 7 + j;
            ct++;
            ct++;
        }
        ct++;
        // cout << endl;
    }
    ct++;
    cout << "MAT 1 " << endl;
    // ct++;
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            cout << mat1[i][j] << " ";
            // ct++;
            // ct++;
        }
        // ct++;/
        cout << endl;
        // ct++;
    }
    // ct++;
    cout << "MAT 2 " << endl;
    // ct++;
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            // ct++;
            cout << mat2[i][j] << " ";
            // ct++;
        }
        // ct++;
        cout << endl;
        // ct++;
    }
    // SUM
    // ct++;
    cout << "RESULT IS : " << endl;
    // ct++;
    int res[n][n];

    for (int i = 0; i < n; i++)
    {
        ct++;
        for (int j = 0; j < n; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
            ct++;
            ct++;
        }
        // cout << endl;
        ct++;
    }
    ct++;
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
            // ct++;
            // ct++;
        }
        // ct++;
        cout << endl;
        // ct++;
    }
    // ct++;
    cout << ct << endl;
    return 0;
}