#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int pr(int n)
{
    if (n < 1)
        return 0;
    int res = 1;
    for (int i = 0; i < 8 * sizeof(int); i++) {
        int curr = 1 << i;
        if (curr > n)
            break;
        res = curr;
    }
    return res;
}
// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int st = stoi(n);
        // cout << st *2;
        st = binaryToDecimal(st);
        cout << pr(st);
    }

    return 0;
}