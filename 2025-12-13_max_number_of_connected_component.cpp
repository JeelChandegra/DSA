/*
Problem: max number of connected component
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], vector<bool>& vis) {
    vis[node] = true;
    int count = 1;   // count this node

    for (auto nbr : adj[node]) {
        if (!vis[nbr]) {
            count += dfs(nbr, adj, vis);
        }
    }
    return count;
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

    
    int mx=0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
           mx =max(mx,dfs(i, adj, vis));
               
            }
        }
    
cout<<mx;
    return 0;
}

