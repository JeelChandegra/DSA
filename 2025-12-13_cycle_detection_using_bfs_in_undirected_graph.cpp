/*
Problem: cycle detection using bfs in undirected graph
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

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
    queue<pair<int,int>> q;

    int start = 1;
    q.push({start, -1});
    vis[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        cout << node << " ";   // BFS traversal

        for (auto nbr : adj[node]) {
            if (!vis[nbr]) {
                vis[nbr] = true;
                q.push({nbr, node});
            }
            else if (nbr != parent) {
                cout << "\nCycle detected";
                return 0;
            }
        }
    }

    cout << "\nNo cycle detected";
    return 0;
}

