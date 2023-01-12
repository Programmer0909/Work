#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int temp = n / 86400;

    cout << "days : " << temp << endl;
    temp = n % 86400;
    cout << "hours : " << temp / 3600 << endl;
    temp = temp % 3600;
    cout << "minutes : " << temp/60 << endl;
    temp = temp % 60;
    cout << "seconds : " << temp << endl;


    return 0;
}