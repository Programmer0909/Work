#include <bits/stdc++.h>
using namespace std;
void add(vector<int> arr[], int i, int j)
{
    arr[i].push_back(j);
    arr[j].push_back(i);
}
void dfs(int v, bool visited[], vector<int> arr[])
{
    visited[v] = true;
    cout << v << " ";
    for (int child : arr[v])
        if (visited[child] == false)
            dfs(child, visited, arr);
}
// AIM :
int main()
{
    int n, z;
    int count = 0;
    cin >> n >> z;
    vector<int> arr[n + 1];
    while (z--)
    {
        int m, n;
        cin >> m >> n;
        add(arr, m, n);
    }
    bool visited[n + 1];
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    for (int i = 1; i <= n; i++)
        if (visited[i] == false)
            dfs(i, visited, arr);
    return 0;
}