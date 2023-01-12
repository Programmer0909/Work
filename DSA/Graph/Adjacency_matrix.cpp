#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size : ";
    int z;
    cin >> n;
    cin >> z;
    int arr[n + 1][n+1];
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
            arr[i][j] = 0;
        
    }
    for (int i = 0; i < z; i++)
    {
        cout << "Enter index : ";
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}