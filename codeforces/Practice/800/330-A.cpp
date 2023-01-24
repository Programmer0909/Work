#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k;
    cin >> n >> k;
    bool arr[n][n];
    vector<int> v1;
    vector<int> v2;
    map<int, int> m;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            char c;
            cin >> c;
            if (c == 'S')
                v1.push_back(i), v2.push_back(j);
        }
    }
    set<pair<int, int>> s;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            pair<int, int> p = make_pair(v1[i], v2[j]);
            s.insert(p);
        }
    }
    cout <<n*k- s.size() << endl;
    return 0;
}