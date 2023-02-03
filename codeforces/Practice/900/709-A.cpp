#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, b, d, sum = 0, ct = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= b)
            sum += a;
        if (sum > d)
            ct++, sum =0;
    }
    
    cout << ct << endl;
    return 0;
}