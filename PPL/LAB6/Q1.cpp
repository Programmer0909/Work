#include <bits/stdc++.h>
using namespace std;
void decToHexa(int n)
{
    char hexaDeciNum[100];

    int i = 0;
    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
// AIM :
int main()
{
    int n;
    cin >> n;
    int temp, ct = 0;
    double sum = 0;
    int rem = 0;
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        ct++;
    }
    int temp2 = n;
    // cout << ct << endl;
    while (temp2 != 0)
    {
        rem = temp2 % 10;
        sum = sum + pow(rem, ct);
        temp2 = temp2 / 10;
    }
    if (n == sum)
    {
        cout << "Armstrong" << endl;
        decToHexa(n);
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }

    return 0;
}