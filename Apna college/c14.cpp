#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min, temp, q;
        min = arr[i];
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                q = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[q] = temp;
        cout << arr[i] << endl;
    }

    return 0;
}