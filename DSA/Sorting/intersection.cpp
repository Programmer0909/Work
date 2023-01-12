#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {3, 4, 5, 6, 7};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int a1 = 0, a2 = 0;
    bool flag = true;
    while (a2 != n)
    {
        if (arr1[a1] == arr2[a2])
        {

            if (arr2[a2] == arr2[a2 - 1])
            {
                flag = false;
            }
            else
            {
                flag = true;
            }
            if (flag)
            {
                cout << arr2[a2] << " ";
            }
            a1++;
            a2++;
        }

        else if (arr1[a1] < arr2[a2])
        {
            a1++;
        }
        else if (arr1[a1] > arr2[a2])
        {
            a2++;
        }
    }

    return 0;
}