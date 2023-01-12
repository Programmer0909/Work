#include <bits/stdc++.h>
using namespace std;
void add(vector<int> arr[], int i, int j)
{
    arr[i].push_back(j);
    arr[j].push_back(i);
}
int temp=1;
void dfs(vector<int> adj[], int s, bool arr[])
{
    arr[s] = true;
    // cout << s << " ";
    temp++;
    for (int u : adj[s])
        if (arr[u] == false)
            dfs(adj, u, arr);
}

void dfsOfGraph(int V, vector<int> adj[])
{
    long long int result = 1;
    int ct=0;
    bool arr[V];
    for (int i = 0; i < V; i++)
        arr[i] = false;
    vector<int> res;
    for (int i = 0; i < V; i++)
    {
        if (arr[i] == false)
        {
            dfs(adj, i, arr);
            ct++;
            result*=(temp-1);
            temp=1;
        }
    }
    cout << ct << " " << result << endl;
    // return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, z;
        cin >> n >> z;
        vector<int> arr[n];
        while (z--)
        {
            int m, n;
            cin >> m >> n;
            add(arr, m-1, n-1);
        }
        dfsOfGraph(n, arr);
    }

    return 0;
}