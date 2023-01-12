#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int arr[101] = {0};
int main()
{
    int t,p;
    cin >> t;
    p=t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
        {
            arr[arr1[i]]++;
            // cout << arr[arr1[i]];
        }
    }
    for (int i = 0; i < 101; i++)
        if (arr[i] == p)
            cout << i << " ";
    return 0;
}