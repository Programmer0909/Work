#include <iostream>
#include <math.h>
using namespace std;

// AIM : RECORD BREAKER

int main()
{

    int n, ct = 0, maxi = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > maxi && arr[j] > arr[j + 1])
        {
            ct++;
        }
        maxi = max(arr[j], maxi);
    }

    cout << ct;
    return 0;
}