/*
Problem: 463. Island Perimeter
Link: https://leetcode.com/problems/island-perimeter/
Date: 2025-12-28
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int cell = 4;  

                    if (i > 0 && grid[i-1][j] == 1) cell--; 
                    if (i < n-1 && grid[i+1][j] == 1) cell--; 
                    if (j > 0 && grid[i][j-1] == 1) cell--; 
                    if (j < m-1 && grid[i][j+1] == 1) cell--; 

                    perimeter += cell;  
                }
            }
        }
        return perimeter;
    }
};

