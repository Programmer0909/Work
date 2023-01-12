#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ct = 0, bx, by, ex, ey;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
            {
                ct++;
                if (ct == 1)
                {
                    bx = i;
                    by = j;
                    ex = i;
                    ey = j;
                }
                else
                {
                    bx=min(bx,i);
                    by=min(by,j);
                    ex=max(ex,i);
                    ey=max(ey,j);
                }
                
            }
        }
    }
    for (int i = min(bx, ex); i <= max(bx, ex); i++)
    {
        for (int j = min(by, ey); j <= max(by, ey); j++)
            cout << arr[i][j];
        cout << endl;
    }
    return 0;
}