
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    int ch = 1;
    while (ch)
    {
        cout << "1 for addition \n2for sub\n3 for multiplication\n4for division\n5 for exponential\n6 for max\n7 for min";
        int p;
        cin >> p;
        if (p == 1)
            cout << a + b << endl;
        else if (p == 2)
            cout << a - b << endl;
        else if (p == 3)
            cout << a * b << endl;
        else if (p == 4)
            cout << a / b << endl;
        else if (p == 5)
            cout << pow(a, b) << endl;
        else if (p == 6)
            cout << max(a, b) << endl;
        else if (p == 7)
            cout << min(a, b) << endl;
        else
            cout << "Wrong number entered" << endl;
        cout << "0 to exit" << endl;
        cin >> ch;
    }
    return 0;
}

// QUESTION 2

// 1ST

int n;
long long int f = 1;
cin >> n;
for (int i = 1; i <= n; i++)
{
    f = f * i;
}
cout << f;

// 2ND

int fact(int n)
{
    long long int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{

    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;

    // 3RD

    int fact(int n)
    {
        long long int f = 1;
        if (n == 1)
            return f;
        else
            return n * fact(n - 1);
    }

    // Question 3

    // 1st

    int main()
    {
        int n;
        cin >> n;
        int a = 0, b = 1, temp;
        cout << "0 1 ";
        for (int i = 2; i < n; i++)
        {

            temp = a + b;
            a = b;
            b = temp;
            cout << b << " ";
        }
        return 0;
    }

    // 2nd

    void fab(int n)
    {
        int a = 0, b = 1, temp;
        cout << "0 1 ";
        for (int i = 2; i < n; i++)
        {

            temp = a + b;
            a = b;
            b = temp;
            cout << b << " ";
        }
    }
    int main()
    {
        int n;
        cin >> n;

        fab(n);
        return 0;
    }

    // Question 4

    int gcd(int a, int b)
    {
        if (b == 0)
        {

            return a;
        }
        else
        {
            return gcd(b, a % b);
        }
    }

    int main()
    {
        int a, b;
        cin >> a >> b;
        int g = gcd(a, b);
        cout << "gcd is " << g << endl;
        cout << "lcm is " << (a * b) / g << endl;
        return 0;
    }

    //  QUESTION 5

    // Q1 armstrong

    int main()
    {
        int n, res = 0, ct = 0, rem = 0, temp;
        cin >> n;
        temp = n;
        while (temp)
        {
            temp /= 10;
            ct++;
        }
        temp = n;
        while (temp)
        {
            rem = temp % 10;
            res = res + (float)pow(rem, ct);
            temp /= 10;
        }
        if (res == n)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        return 0;
    }

    // Q2  pallindrome

    int main()
    {
        int n, res = 0, ct = 0, rem = 0, temp;
        cin >> n;
        temp = n;
        while (temp)
        {
            temp /= 10;
            ct++;
        }
        temp = n;
        while (temp)
        {
            rem = temp % 10;
            res = res * 10 + rem;
            temp /= 10;
        }
        if (res == n)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        return 0;
    }