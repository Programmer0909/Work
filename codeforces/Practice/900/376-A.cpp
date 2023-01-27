#include <bits/stdc++.h>
using namespace std;
// #define int int long long 
// AIM :
int32_t main()
{
    string n;
    cin >> n;
    long long int l = 0, r = 0 , ct=0;
    bool flag = false;
    for (long long int i = 0; i < n.length(); i++) if(n[i]=='^') ct=i; 
    for (long long int i = 0; i < n.length(); i++)
    {
        if (n[i] == '=')
            continue;
        if (n[i] == '^')
        {
            flag = true;
            continue;
        }

        // cout << n[i] << endl;
        if (flag == false)
            l +=abs(ct-i)* abs(int(48 - n[i]));
        else 
            r += abs(ct-i)*abs(int(48 - n[i]));
        // cout << l << " " << r << endl;
    }
    // cout << l << " " << r << endl;
    if (l > r)
        cout << "left" << endl;
    else if (l < r)
        cout << "right" << endl;
    else
        cout << "balance" << endl;
    return 0;
}