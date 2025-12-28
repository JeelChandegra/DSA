/*
Problem: 994. Rotting Oranges ,time in queue
Link: https://leetcode.com/problems/rotting-oranges/description/
Date: 2025-12-28
*/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<pair<int,int>, int>> q;
        int fresh = 0;
        int maxTime = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0}); // time = 0
                }
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto node = q.front(); q.pop();
            int x = node.first.first;
            int y = node.first.second;
            int t = node.second;

            maxTime = max(maxTime, t);

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && ny >= 0 && nx < n && ny < m &&
                    grid[nx][ny] == 1) {

                    grid[nx][ny] = 2;
                    fresh--;
                    q.push({{nx, ny}, t + 1});
                }
            }
        }

        return fresh == 0 ? maxTime : -1;
    }
};

