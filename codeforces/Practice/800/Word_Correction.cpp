#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int a;
    cin >> a;
    string n;
    cin >> n;
    bool vo = false;
    for (int i = 0; i < n.length(); i++)
    {
        if ((n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'y'))
        {
            if ((vo == false))
            {
                // cout << "CASE 1 ";
                cout << n[i];
                vo = true;
            }
        }
        else
        {
            // cout << "CASE 2 ";

            cout << n[i];
            vo = false;
        }
    }

    return 0;
}