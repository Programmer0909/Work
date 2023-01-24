#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    set<int> s;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    (s.size() == n) ? (cout << "I become the guy.") : (cout << "Oh, my keyboard!");
    return 0;
}