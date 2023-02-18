#include <bits/stdc++.h>
using namespace std;
void add(vector<int> arr[], int i, int j)
{
    arr[i].push_back(j);
    arr[j].push_back(i);
}
void bfs(vector<int> arr[],  int s, bool visited[])
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
        if (visited[i] == false) bfs(arr, i, visited);
    return 0;
}