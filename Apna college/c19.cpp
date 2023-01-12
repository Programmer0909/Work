#include <iostream>
#include <math.h>
using namespace std;

// AIM :
const int N = 1e6 + 2;
int main()
{

    int n, mixi = -99999;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a[N];

    for (int p = 0; p < N; p++)
    {
        a[p] = -1;
    }

    for (int j = 0; j < n; j++)
    {
        int po = arr[j];
        a[po] = j;

        if (a[po] != -1)
        {
            mixi = min(mixi, a[po]);
        }

        else
        {
            int po = arr[j];
            a[po] = j;
        }
    }
    cout << mixi;
    return 0;
}