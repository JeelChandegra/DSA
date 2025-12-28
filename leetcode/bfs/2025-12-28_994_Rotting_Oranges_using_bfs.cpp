/*
Problem: 994. Rotting Oranges using bfs
Link: https://leetcode.com/problems/rotting-oranges/description/
Date: 2025-12-28
*/

class Solution {
public:
    int bfs(vector<vector<int>>& v) {
        queue<pair<int,int>> q;
        int time = 0;
        int fresh = 0;

        int n = v.size();
        int m = v[0].size();

       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 2) {
                    q.push({i, j});
                }
                else if (v[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int row[4] = {0, 0, 1, -1};
        int col[4] = {1, -1, 0, 0};

       
        while (!q.empty() && fresh > 0) {
            int size = q.size();
            time++;

            for (int k = 0; k < size; k++) {
                auto [i, j] = q.front();
                q.pop();

                for (int x = 0; x < 4; x++) {
                    int ni = i + row[x];
                    int nj = j + col[x];

                    if (ni >= 0 && nj >= 0 && ni < n && nj < m &&
                        v[ni][nj] == 1) {

                        v[ni][nj] = 2; 
                        fresh--;        
                        q.push({ni, nj});
                    }
                }
            }
        }

        return (fresh == 0) ? time : -1;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        return bfs(grid);
    }
};

