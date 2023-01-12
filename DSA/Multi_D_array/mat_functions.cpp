#include <bits/stdc++.h>
using namespace std;

// AIM :

void printi(vector<vector<int>> p)
{
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[i].size(); j++)
        {
            cout << p[i][j] << " ";
        }
    }
}

int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < 3; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    printi(arr);
    return 0;
}