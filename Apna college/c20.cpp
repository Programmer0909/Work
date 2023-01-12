#include <iostream>
#include <math.h>
using namespace std;

// AIM :

int main()
{

    int n, ed=0, s1;
    int sum = 0;
    cin >> n;
    cin >> s1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (sum < s1)
        {
            sum = sum + arr[j];
            ed++;
            
        }
        else
        {
            break;
        }
    }

    for (int st = 0; st < n; st++)
    {
        if (sum > s1)
        {
            sum -= arr[st];
        }
        else if (sum == s1)
        {
            cout << st+1 << endl;
            cout << ed;
            break;
        }

        else
        {
            break;
        }
    }

    return 0;
}