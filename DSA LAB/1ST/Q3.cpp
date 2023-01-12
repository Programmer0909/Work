#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int temp = n / 365;

    cout << "years : " << temp << endl;
    temp = n % 365;
    cout << "months : " << temp / 30 << endl;
    temp = temp % 30;
    cout << "days : " << temp << endl;

    return 0;
}