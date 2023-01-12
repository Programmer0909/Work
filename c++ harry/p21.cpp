#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM :

int main()
{
    int arr[5] = {2, 6, 4, 9, 1};
    sort(arr,arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}