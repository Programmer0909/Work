#include <bits/stdc++.h>
using namespace std;

int ch(int n)
{
    int ct = 0, cp =0;
    // int x[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x==0)
        {
            cp++;
        }
        
        if (x > 0)
        {
            ct++;
        }
    }
    if (cp)
    {
        return 0 ;
    }
    
    return (n-ct) % 2;
}

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ch(n) << endl;
    }

    return 0;
}