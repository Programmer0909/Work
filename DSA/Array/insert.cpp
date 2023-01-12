#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    
    int arr[7] = {1, 2, 3, 5, 6, 7};
    for (int i = 6; i >2 ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[3]=4;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}