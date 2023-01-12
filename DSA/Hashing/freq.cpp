#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        m[c]++;
    }
    for (auto x : m)
    {
        cout << x.first << ":" << x.second;
        cout << endl;
    }
    
    return 0;
}