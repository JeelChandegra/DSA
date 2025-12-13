/*
Problem: Connected Components in an Undirected Graph
Link: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool>& vis, vector<int>& comp) {
    vis[node] = true;
    comp.push_back(node);

    for (auto nbr : adj[node]) {
        if (!vis[nbr]) {
            dfs(nbr, adj, vis, comp);
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

        vector<bool> vis(n, false);
        vector<vector<int>> components;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            vector<int> comp;     
            dfs(i, adj, vis, comp);
            components.push_back(comp);
        }
    }



    return components;
}

