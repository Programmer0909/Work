#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[] = {100, 2, 0};
    arr[0] = arr[2] ? 1 : 0;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}