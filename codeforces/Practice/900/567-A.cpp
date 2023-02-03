#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << abs(arr[1] - arr[0]) << " " << abs(arr[0] - arr[n - 1]) << endl;
    for (int i = 1; i < n - 1; i++) cout << min(abs(arr[i + 1] - arr[i]), abs(arr[i - 1] - arr[i])) << " " << max(abs(arr[0] - arr[i]), abs(arr[n - 1] - arr[i])) << endl;
    cout << abs(arr[n-1] - arr[n-2]) << " " << abs(arr[0] - arr[n - 1]);
    return 0;
}