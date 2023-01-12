#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int>::iterator low;
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        int b;
        cin >> b;
        low = lower_bound(v.begin(), v.end(), b);
        if (v.at(((low - v.begin()))) == b)
        {
            cout << "Yes " << (low - v.begin()) + 1 << endl;
        }
        else
        {
            cout << "No " << (low - v.begin()) + 1 << endl;
        }
    }
    return 0;
}
