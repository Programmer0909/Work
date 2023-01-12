#include <bits/stdc++.h>
using namespace std;

// AIM :
vector<int> v[100];
void add(int a, int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

void add_list(int n)
{
    int m;
    cout << "Enter no. of edges : " << endl;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
}

void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (auto x : v[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter no. of vertices : " << endl;
    int n;
    cin >> n;
    add_list(n);
    display(n);
    return 0;
}