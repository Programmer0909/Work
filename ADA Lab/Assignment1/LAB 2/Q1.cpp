#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int ct = 0;
    // ct++;
    int n;
    cin >> n;
    ct++;
    int mat1[n][n];
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
    cout << endl
         << "MAT 1 " << endl;
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
        // ct++;
        cout << endl;
    }
    // ct++;
    cout << endl
         << "MAT 2 " << endl;
    // ct++;
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            cout << mat2[i][j] << " ";
            // ct++;
            // ct++;
        }
        // ct++;
        cout << endl;
        // ct++;
    }
    // SUM
    // ct++;
    cout << endl
         << "RESULT IS : " << endl;
    // ct++;
    int res[n][n];
    time_t start, end;
    time(&start);
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            // ct++;
            // ct++;
            res[i][j] = 0;
        }
        // ct++;
        // cout << endl;
    }
    // ct++;
    for (int i = 0; i < n; i++)
    {
        ct++;
        for (int j = 0; j < n; j++)
        {
            ct++;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += (mat1[i][k] * mat2[k][j]);
                ct++;
                ct++;
            }
            ct++;
        }
        ct++;
        // cout << endl;
    }
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    ct++;
    for (int i = 0; i < n; i++)
    {
        // ct++;
        for (int j = 0; j < n; j++)
        {
            // ct++;
            // ct++;
            cout << res[i][j] << " ";
        }
        // ct++;
        cout << endl;
        // ct++;
    }
    // ct++;
    // ct++;
    cout << endl
         << ct << endl;
    return 0;
}

