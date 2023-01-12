#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, ct = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n ; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            ct++;
        }

        else
        {
            cout << arr[i - 1] << " : " << ct << endl;
            ct = 1;
        }
    }
    cout << arr[n - 1] << " : " << ct << endl;
    return 0;
}