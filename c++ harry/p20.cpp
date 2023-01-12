#include <bits/stdc++.h>
using namespace std;

// AIM : VECTOR

int main()
{
    vector<int> vec1;
    int a;
    for (int i = 0; i < 4; i++)
    {
        cout << "Element :" << endl;
        cin >> a;
        vec1.push_back(a);
    }

    vector<int>::iterator iter = vec1.end();
    vec1.insert(iter, 5, 566);

    for (int j = 0; j < 5; j++)
    {
        cout << vec1.at(j) << endl;
    }
    return 0;
}