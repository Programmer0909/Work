#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    if(n%2!=0) {cout << -1 << endl;return 0;}
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    // if (n % 2 == 0)
        for (int i = 0; i < n; i += 2)
            swap(arr[i], arr[i + 1]);
    // else
    //     for (int i = 0; i < n - 1; i += 2)
    //         swap(arr[i], arr[i + 1]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}