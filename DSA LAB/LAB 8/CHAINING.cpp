#include <bits/stdc++.h>
using namespace std;

class Myhash
{
    int hashtable;
    list<int> *table;

public:
    Myhash(int a)
    {
        hashtable = a;
        table = new list<int>[a];
    }
    void insert(int key)
    {
        int i = key % hashtable;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = key % hashtable;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i = key % hashtable;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }
};

// AIM :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = n / 2;

    Myhash m(a);
    for (int i = 0; i < n; i++)
    {
        m.insert(arr[i]);
    }
    cin >> a;
    m.remove(64);
    if (m.search(a))
        cout << "yes";
    else
        cout << "No" << endl;
    return 0;
}