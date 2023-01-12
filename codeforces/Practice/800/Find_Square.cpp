#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, m, bx = 0, by = 0, ex = 0, ey = 0, ct = 0;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'B')
            {
                ct++;
                if (ct == 1)
                {
                    bx = i;
                    by = j;
                }
                ex = i;
                ey = j;
            }
        }
    }
    cout << ((ex+bx)/2)+1 << " " << ((ey+by)/2)+1;
    return 0;
}