#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V, vector<vector<int>> adj[], vector<pair<int, int>> &mst)
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>, greater<pair<int, int>>>
        pq;
    vector<int> vis(V, 0);
    vector<int> parent(V, -1);
    pq.push({0, 0});
    int sum = 0;
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;
        if (vis[node] == 1)
            continue;
        vis[node] = 1;
        sum += wt;
        for (auto it : adj[node])
        {
            int adjNode = it[0];
            int edW = it[1];
            if (!vis[adjNode])
            {
                pq.push({edW, adjNode});
                parent[adjNode] = node;
            }
        }
    }
    for (int i = 1; i < V; i++)
        mst.push_back({parent[i], i});
    return sum;
}

int main()
{

    int V = 5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> adj[V];
    for (auto it : edges)
    {
        vector<int> tmp(2);
        tmp[0] = it[1];
        tmp[1] = it[2];
        adj[it[0]].push_back(tmp);

        tmp[0] = it[0];
        tmp[1] = it[2];
        adj[it[1]].push_back(tmp);
    }
    vector<pair<int, int>> mst;
    spanningTree(V, adj, mst);
    cout << "MST edges:" << endl;
    for (auto edge : mst)
        cout << edge.first << " - " << edge.second << endl;
    return 0;
}
