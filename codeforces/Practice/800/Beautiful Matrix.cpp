#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[5][5];
    int x = 0, y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int res=0;
    res+=abs(2-x);
    res+=abs(2-y);
    cout << res << endl;
    return 0;
}