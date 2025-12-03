/*
Problem: 74. Search a 2D Matrix
Link: https://leetcode.com/problems/search-a-2d-matrix/description/
Date: 2025-12-03
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = -1;

        for (int i = 0; i < m; i++) {
            int first = matrix[i][0];
            int last  = matrix[i][n - 1];

            if (target >= first && target <= last) {
                row = i;
                break;
            }
            if (target < first) return false;   // Can't exist further
        }

        if (row == -1) return false;  // not found row

        // Binary search in selected row
        return binary_search(matrix[row].begin(), matrix[row].end(), target);
    }
};

