#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n = 8;
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};

    int neg = 0, pos = 0, temp[n];
    for (int i = 0; i < n; i++)
        (arr[i] < 0) ? (neg++) : (pos++);
    int a = 0, b = pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {   
            temp[a] = arr[i];
            a++;
        }
        else
        {
            temp[b] = arr[i];
            b++;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}