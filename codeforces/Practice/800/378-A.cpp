#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int a, b;
    cin >> a >> b;
    int ct1 = 0, ct2 = 0, ct3 = 0;
    for (int i = 1; i <= 6; i++)
    {
        if(abs(a-i)>abs(b-i)) ct3++;
        else if(abs(a-i)==abs(b-i)) ct2++;
        else if(abs(a-i)<abs(b-i)) ct1++;
    }
    cout << ct1 << " " << ct2 << " " << ct3 ;
    return 0;
}