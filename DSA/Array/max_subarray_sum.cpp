#include <bits/stdc++.h>
using namespace std;

// AIM :

int main()
{
    int n, res=0 , temp=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        temp = max(arr[i], (arr[i] + temp));
        res=max(temp,res);
    }
    cout << endl << res;
    return 0;
}