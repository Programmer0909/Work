// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>

// using namespace std;

// struct Edge {
//     int source;
//     int destination;
//     int weight;
// };

// bool compare_edges(const Edge& edge1, const Edge& edge2) {
//     return edge1.weight < edge2.weight;
// }

// int find_parent(int vertex, vector<int>& parent) {
//     if (parent[vertex] == vertex) {
//         return vertex;
//     } else {
//         return parent[vertex] = find_parent(parent[vertex], parent);
//     }
// }

// void merge_vertices(int vertex1, int vertex2, vector<int>& parent) {
//     parent[find_parent(vertex1, parent)] = find_parent(vertex2, parent);
// }

// vector<Edge> kruskal_mst(vector<Edge>& graph, int num_vertices) {
//     priority_queue<Edge, vector<Edge>, decltype(&compare_edges)> pq(&compare_edges);

//     for (auto edge : graph) {
//         pq.push(edge);
//     }

//     vector<int> parent(num_vertices);
//     for (int i = 0; i < num_vertices; i++) {
//         parent[i] = i;
//     }

//     vector<Edge> mst;

//     while (mst.size() < num_vertices - 1 && !pq.empty()) {
//         Edge current_edge = pq.top();
//         pq.pop();

//         int parent1 = find_parent(current_edge.source, parent);
//         int parent2 = find_parent(current_edge.destination, parent);
//         if (parent1 == parent2) {
//             continue;
//         }

//         merge_vertices(current_edge.source, current_edge.destination, parent);

//         mst.push_back(current_edge);
//     }

//     return mst;
// }

// int main() {
//     vector<Edge> graph = {
//         {0, 1, 2},
//         {0, 3, 6},
//         {1, 2, 3},
//         {1, 3, 8},
//         {1, 4, 5},
//         {2, 4, 7},
//         {3, 4, 9}
//     };
//     vector<Edge> mst = kruskal_mst(graph, 5);
//     for (auto edge : mst) {
//         cout << "(" << edge.source << ", " << edge.destination << ", " << edge.weight << ")" << endl;
//     }
//     return 0;
// }

// /*
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Define a function to solve the Change-Making Problem using a greedy algorithm
// vector<int> change_making_greedy(int amount, vector<int>& coins) {
//     // Sort the coins in decreasing order
//     sort(coins.rbegin(), coins.rend());

//     // Initialize a vector to store the number of coins of each denomination
//     vector<int> coin_counts(coins.size(), 0);

//     // Loop through the coins and greedily select as many as possible for each denomination
//     for (int i = 0; i < coins.size(); i++) {
//         while (amount >= coins[i] && coin_counts[i] < 2) {
//             amount -= coins[i];
//             coin_counts[i]++;
//         }
//     }

//     // If we were not able to make change for the full amount, return an empty vector
//     if (amount > 0) {
//         return {};
//     }

//     // Return the number of coins of each denomination used to make change
//     return coin_counts;
// }

// // Driver code to test the function
// int main() {
//     // Define the amount and the available coins
//     int amount = 63;
//     vector<int> coins = {1, 5, 10, 20, 50};

//     // Solve the Change-Making Problem using a greedy algorithm
//     vector<int> coin_counts = change_making_greedy(amount, coins);

//     // Print the results
//     if (coin_counts.empty()) {
//         cout << "Unable to make change for " << amount << endl;
//     } else {
//         cout << "Number of coins used:" << endl;
//         for (int i = 0; i < coins.size(); i++) {
//             if (coin_counts[i] > 0) {
//                 cout << coin_counts[i] << " x " << coins[i] << " paise" << endl;
//             }
//         }
//     }

//     return 0;
// }

// */

// /*
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Define a function to solve the Change-Making Problem using a greedy algorithm
// vector<int> change_making_greedy(int amount, vector<int>& coins) {
//     // Sort the coins in decreasing order
//     sort(coins.rbegin(), coins.rend());

//     // Initialize a vector to store the number of coins of each denomination
//     vector<int> coin_counts(coins.size(), 0);

//     // Loop through the coins and greedily select as many as possible for each denomination
//     for (int i = 0; i < coins.size(); i++) {
//         while (amount >= coins[i]) {
//             amount -= coins[i];
//             coin_counts[i]++;
//         }
//     }

//     // If we were not able to make change for the full amount, return an empty vector
//     if (amount > 0) {
//         return {};
//     }

//     // Return the number of coins of each denomination used to make change
//     return coin_counts;
// }

// // Driver code to test the function
// int main() {
//     // Define the amount and the available coins
//     int amount = 63;
//     vector<int> coins = {1, 5, 10, 20, 50};

//     // Solve the Change-Making Problem using a greedy algorithm
//     vector<int> coin_counts = change_making_greedy(amount, coins);

//     // Print the results
//     if (coin_counts.empty()) {
//         cout << "Unable to make change for " << amount << endl;
//     } else {
//         cout << "Number of coins used:" << endl;
//         for (int i = 0; i < coins.size(); i++) {
//             if (coin_counts[i] > 0) {
//                 cout << coin_counts[i] << " x " << coins[i] << " paise" << endl;
//             }
//         }
//     }

//     return 0;
// }

// */

// /*
// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// // Define a struct to represent a block of data
// struct Block {
//     int start; // Starting index of the block
//     int end;   // Ending index of the block
//     vector<int> data; // Data in the block
//     Block(int s, int e, vector<int>& d) : start(s), end(e), data(d) {}
// };

// // Define a custom comparison function for the priority queue
// struct CompareBlocks {
//     bool operator() (const Block& b1, const Block& b2) const {
//         return b1.data[0] > b2.data[0]; // Compare the first elements of the blocks
//     }
// };

// // Define a function to merge 3 blocks using the Optimal Ternary Merge Algorithm
// Block merge_blocks(Block& b1, Block& b2, Block& b3) {
//     // Initialize a vector to hold the merged data
//     vector<int> merged_data;
//     merged_data.reserve(b1.data.size() + b2.data.size() + b3.data.size());

//     // Initialize the iterators for the blocks
//     auto it1 = b1.data.begin();
//     auto it2 = b2.data.begin();
//     auto it3 = b3.data.begin();

//     // Merge the blocks until one of them is empty
//     while (it1 != b1.data.end() && it2 != b2.data.end() && it3 != b3.data.end()) {
//         if (*it1 <= *it2 && *it1 <= *it3) {
//             merged_data.push_back(*it1);
//             it1++;
//         } else if (*it2 <= *it3) {
//             merged_data.push_back(*it2);
//             it2++;
//         } else {
//             merged_data.push_back(*it3);
//             it3++;
//         }
//     }

//     // Merge the remaining elements of the non-empty blocks
//     while (it1 != b1.data.end() && it2 != b2.data.end()) {
//         if (*it1 <= *it2) {
//             merged_data.push_back(*it1);
//             it1++;
//         } else {
//             merged_data.push_back(*it2);
//             it2++;
//         }
//     }
//     while (it2 != b2.data.end() && it3 != b3.data.end()) {
//         if (*it2 <= *it3) {
//             merged_data.push_back(*it2);
//             it2++;
//         } else {
//             merged_data.push_back(*it3);
//             it3++;
//         }
//     }
//     while (it1 != b1.data.end() && it3 != b3.data.end()) {
//         if (*it1 <= *it3) {
//             merged_data.push_back(*it1);
//             it1++;
//         } else {
//             merged_data.push_back(*it3);
//             it3++;
//         }
//     }

//     // Merge the remaining elements of the last non-empty block
//     while (it1 != b1.data.end()) {
//         merged_data.push_back(*it1);
//         it1++;
//     }
//     while (it2 != b2.data.end()) {
//         merged_data.push_back(*it2);
//         it2++;
//     }
//     while (it3 != b3.data.end()) {
//         merged_data.push_back(*it3);
//         it3++;
//     }

//     // Return the merged block
//     return Block(b1.start, b3.end, merged_data);
// }

// // Define a function to perform the Optimal Ternary Merge Algorithm on a vector of data
// vector<int> optimal_ternary_merge(vector<int>&

// */

#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> vis(V, 0);
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
                pq.push({edW, adjNode});
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter Size : ";
    int z;
    cin >> n;
    cin >> z;
    int vector<vector<int>> edges;
    for (int i = 1; i < n+1; i++)
        for (int j = 1; j < n+1; j++)
            arr[i][j] = 0;
    for (int i = 0; i < z; i++)
    {
        cout << "Enter index : ";
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    cout << "The sum of all the edge weights: " << spanningTree(n, arr) << endl;
    return 0;
}