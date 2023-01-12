#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    unordered_map<string, int> m;
    m["Pratham"] = 1;
    m["Naman"] = 2;
    m.insert({"Krishna", 3});
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    (m.find("Pratham") != m.end()) ? (cout << "Found" << endl) : cout << "Not Found" << endl;
    return 0;
}