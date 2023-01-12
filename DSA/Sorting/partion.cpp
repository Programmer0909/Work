#include <bits/stdc++.h>
using namespace std;

// AIM :

void partion(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], inds = 0, indl = 0, ct=0;
    for (int i = l; i < (h - l + 1); i++)
    {
        if (arr[i] < arr[p])
        {
            temp[inds] = arr[i];
            inds++;
        }
        else if (arr[i] > arr[p])
        {
            temp[h - l + indl] = arr[i];
            indl++;
        }
        else
        {
            ct++;
        }
    }
    while (ct--)
    {
        arr[inds] = arr[p];
        inds++;
    }
    for (int i = 0; i < h - l + 1; i++)
    {
        cout << temp[i] << " ";
    }
    // for (int i = 0; i < ; i++)
    // {
    //   cout << arr[i] << " ";
    // }
}

int main()
{
    int arr[]={5,13,6,9,12,11,8};
    partion(arr,0,6,6);
    
    

    return 0;
}