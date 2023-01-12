#include <bits/stdc++.h>
using namespace std;

// Sum of 2 mat

class Solution
{
public:
    void Addition(vector<vector<int>> &matrixA, vector<vector<int>> &matrixB)
    {
        for (int i = 0; i < matrixA.size(); i++)
        {
            for (int j = 0; j < matrixA[i].size(); j++)
            {
                matrixA[i][j] += matrixB[i][j];
            }
        }
    }
};

// Sum of upper and lower triangular mat

class Solution
{
public:
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        int ls = 0, us = 0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (i <= j)
                {
                    ls += matrix[i][j];
                }
                if (i >= j)
                {
                    us += matrix[i][j];
                }
            }
        }
    }
};

// AIM :
int main() { return 0; }