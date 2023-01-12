#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    string a, b;
    cin >> a >> b;
    unordered_set <char> s;
    for (int i = 0; i < a.length(); i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < b.length(); j++)
    {
        if (s.find(b[j])==s.end())
        {   
            cout << "Fake" << endl;
            break;
        }
        
    }
    cout << "KYA BAAT HAI";
    return 0;
}