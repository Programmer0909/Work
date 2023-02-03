#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 10)
    {
        if(n==1) cout << -1;
        else
        {
            cout << 1 ;
            for (int i = 1; i < n; i++)
            {
                cout << 0;
            }
            
        }
        
        return 0;
    }
    for (int i = 0; i < n; i++)
        cout << k;
    return 0;
}