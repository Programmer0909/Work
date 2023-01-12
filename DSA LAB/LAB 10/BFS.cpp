// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// vector<int> v[100];
// void add(int a, int b)
// {
//     v[a].push_back(b);
//     v[b].push_back(a);
// }

// void add_list(int n)
// {
//     int m;
//     cout << "Enter no. of edges : " << endl;
//     cin >> m;
//     while (m--)
//     {
//         int a, b;
//         cin >> a >> b;
//         add(a, b);
//     }
// }

// void display(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (auto x : v[i])
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
// }

// void bfs(int n, int m)
// {
//     queue<int> q;
//     bool visi[n + 1] = {false};
//         visi[m] = true;

//     q.push(m);
//     while (!q.empty())
//     {
//         int a = q.front();
//         cout << a << " ";
//         q.pop();
       
//         for (auto x : v[a])
//         {
//             if (visi[x] == false)
//             {
//                 q.push(x);
//                 visi[x] = true;
//             }
//         }
//     }
// }

// int main()
// {
//     cout << "Enter no. of vertices : " << endl;
//     int n, st;
//     cin >> n;
//     add_list(n);
//     display(n);
//     cout << "BFS starts form " << endl;
//     cin >> st;
//     bfs(n, st);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void add(vector<int> arr[], int i, int j)
{
    arr[i].push_back(j);
    arr[j].push_back(i);
}
void bfs(vector<int> arr[], int n, int s, bool visited[])
{

    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int i : arr[u])
        {
            if (visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
    int n, z;
    int count = 0;
    cin >> n >> z;
    vector<int> arr[n+1];
    while (z--)
    {
        int m, n;
        cin >> m >> n;
        add(arr, m, n);
    }
    bool visited[n+1];
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    for (int i = 1; i <= n; i++)
        if (visited[i] == false) bfs(arr, n, i, visited);
    return 0;
}
