/*
Problem: Counting Rooms
Link: https://cses.fi/problemset/task/1192/
Date: 2025-12-15
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& grid, int i, int j) {
    int n = grid.size();
    int m = grid[0].size();

    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '#')
        return;

    grid[i][j] = '#';  // mark visited

    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {
                count++;
                dfs(grid, i, j);
            }
        }
    }

    cout << count << "\n";
    return 0;
}

