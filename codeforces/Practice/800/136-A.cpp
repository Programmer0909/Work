#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        m[a] = i;
    }
    // sort(m.begin(), m.end() , greater<int>()) ;
    
    for (auto i : m)
        cout << i.second << " ";
    return 0;
}