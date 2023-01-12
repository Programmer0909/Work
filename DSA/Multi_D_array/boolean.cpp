#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to modify the matrix such that if a matrix cell matrix[i][j]
    // is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        // code here
        bool row[matrix.size()] = {false};
        bool col[matrix[0].size()] = {false};

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 1)
                {
                    row[i] = true;
                    col[i] = true;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (row[i] && col[i])
                {
                    matrix[i][j] = 1;
                }
            }
        }
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}