#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, res = 0;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][0] == arr[j][1])
                res++;
    cout << res << endl;
    return 0;
}