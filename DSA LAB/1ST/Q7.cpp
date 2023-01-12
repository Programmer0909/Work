#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        auto it = find(v.begin(), v.end(), k);
        if (it != v.end())
        {
            cout << "Yes"
                 << " ";
            cout << it - v.begin() + 1 << endl;
        }

        else
        {
            auto its = lower_bound(v.begin(), v.end(), k);
            cout << "No"
                 << " ";
            cout << its - v.begin() + 1 << endl;
        }
    }

    return 0;
}