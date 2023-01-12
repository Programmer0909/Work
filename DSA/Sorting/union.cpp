#include <bits/stdc++.h>
using namespace std;

// AIM :

int doUnion(int a[], int n, int b[], int m)
{
    // code here
    int re = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[j] < a[i])
        {
            if (b[j] != re)
            {
                cout << b[j] << " ";
                re = b[j];
            }
            j++;
        }
        else if (a[i] < b[j])
        {
            if (a[i] != re)
            {
                cout << a[i] << " ";
                re = a[i];
            }
            i++;
        }
        else
        {
            if (a[i] != re)
            {
                cout << a[i] << " ";
                re = a[i];
            }
            i++;
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()

{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3};
    doUnion(a, 5, b, 3);

    return 0;
}