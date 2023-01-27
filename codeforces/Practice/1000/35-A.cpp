#include <bits/stdc++.h>
using namespace std;

// AIM :

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int ball = n;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == ball)
            ball = b;
        else if (b == ball)
            ball = a;
    }
    cout << ball << endl;
    return 0;
}