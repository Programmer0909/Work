#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 9},
                 {10, 11, 12}};

    for (int i = 0; i < matrix.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = matrix[i].size()-1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}