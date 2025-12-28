/*
Problem: Count Negative Numbers in a Sorted Matrix
Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
Date: 2025-12-28
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int i = rows - 1; 
        int j = 0;        
        int count = 0;

        while (i >= 0 && j < cols) {
            if (grid[i][j] < 0) {
                count += cols - j; 
                i--;               
            } else {
                j++;               
            }
        }

        return count;
    }
};

