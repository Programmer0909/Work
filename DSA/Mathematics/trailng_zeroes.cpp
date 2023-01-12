#include <bits/stdc++.h>
using namespace std;

// AIM : TRAILING ZEROES ; TIME COMPLEXITY = Log(n) ; SPACE COMPLEXITY = theta(1)
int main()
{
    int n, res = 0;
    cout<<"Enter the number :"<<endl;
    cin >> n;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    cout<<"Number of zeroes : "<<res<<endl;
    return 0;
}