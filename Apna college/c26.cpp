#include <bits/stdc++.h>
using namespace std;
// AIM : Sieve of Eratosthenes
int checkprime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    bool check[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = i, check[i] = true;
    for (int i = 2; i <= sqrt(n); i++)
        if (check[i])
            if (checkprime(i))
                for (int j = 2 * i; j <= n; j = j + i)
                    check[j] = false;
    for (int i = 2; i <= n; i++)
        if (check[i])
            cout << arr[i] << " ";
    return 0;
}
