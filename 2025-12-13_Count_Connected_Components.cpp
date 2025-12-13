/*
Problem: Count Connected Components
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;

    for (int nei : adj[node]) {
        if (!visited[nei]) {
            dfs(nei, adj, visited);
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
    int components = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }

    cout << components << endl;
    return 0;
}

