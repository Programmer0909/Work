#include <bits/stdc++.h>
using namespace std;

// AIM :
class Solution
{
public:
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            v.push_back(matrix[0][j]);
        }
        for (int i = 1; i < n; i++)
        {
            v.push_back(matrix[i][m - 1]);
        }
        for (int j = m - 2; j >= 0; j--)
        {
            v.push_back(matrix[n - 1][j]);
        }
        for (int i = n - 2; i > 0; i--)
        {
            v.push_back(matrix[i][0]);
        }
        return v;
    }
};

int main()
{

    vector<vector<int>> arr;
    arr = {
        {1, 2},
        {5, 17},
    };
    Solution ob;
    vector<int> v = ob.boundaryTraversal(arr, 2, 2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}