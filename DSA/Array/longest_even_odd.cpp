#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, res = 0, tem = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (((arr[i] % 2 != 0) && (arr[i - 1] % 2 == 0)) || ((arr[i] % 2 == 0) && (arr[i - 1] % 2 != 0))){
        tem++;
        if (tem > res){res = tem;}}
        else tem=1;
    }
    
    cout << res;
    return 0;
}