/*
Problem: cycle detection in undirected graph
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

    bool dfs(int node, vector<int> adj[], vector<bool>& vis, int parent) {
        vis[node] = true;

        for (auto nbr : adj[node]) {
            if (!vis[nbr]) {
                    if (dfs(nbr, adj, vis, node))
                        return true;
            }
            else if (nbr!= parent) {
                return true; 
            }
        }
        return false;
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

    bool hasCycle = false;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (dfs(i, adj, vis, -1)) {
                hasCycle = true;
                break;
            }
        }
    }

    cout << hasCycle;
    return 0;
}

