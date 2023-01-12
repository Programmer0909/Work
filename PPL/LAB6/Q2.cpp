#include <bits/stdc++.h>
using namespace std;
int factorials(int n)
{
    if (n == 0)
        return 1;
    return n * factorials(n - 1);
}
float solveseries(int x)
{
    float z = 1;
    for (int i = 1; i <= 5; i++)
    {
        int c = 2 * i;
        int den = factorials(c);
        z += ((int)pow(-1, i) * (float)(x)) / (den);
    }
    return z;
}
int main()
{
    int n;
    cin >> n;
    cout << solveseries(n);
    return 0;
}
