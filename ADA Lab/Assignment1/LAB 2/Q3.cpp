#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[100][100];
    memset(arr, 0, sizeof arr);
    for (int i = 1; i < 100; i++)
        for (int j = 1; j < 100; j++)
            if (i % j == 0)
                arr[i][j] = i * j;
    int ct = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (arr[i][j] != 0)
                ct++;
    (ct > (10000 / 3)) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    return 0;
}