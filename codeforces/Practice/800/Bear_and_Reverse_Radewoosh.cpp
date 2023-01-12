#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, til = 0, tir = 0, l = 0, r = 0;
    cin >> n >> c;
    int scr[n], time[n];
    for (int i = 0; i < n; i++)
        cin >> scr[i];
    for (int i = 0; i < n; i++)
        cin >> time[i];
    for (int i = 0; i < n; i++)
    {
        til += time[i];
        l += max(0, scr[i] - (c * til));
        tir += time[n - 1 - i];
        r += max(0, scr[n - 1 - i] - (c * tir));
    }
    if (l > r)
        cout << "Limak";
    else if (r > l)
        cout << "Radewoosh";
    else
        cout << "Tie";
    return 0;
}