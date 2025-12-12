/*
Problem: dfs
Link: https://www.geeksforgeeks.org/dsa/depth-first-search-or-dfs-for-a-graph/
Date: 2025-12-12
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int nbr : adj[node]) {
        if (!visited[nbr]) {
            dfs(nbr, adj, visited);
        }
    }
}

int main() {
    int n, m; 
    cin >> n >> m;

    vector<int> adj[n];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    vector<bool> visited(n, false);

    dfs(0, adj, visited);

    return 0;
}

