/*
Problem: N-Queens
Link: https://leetcode.com/problems/n-queens/description/
Date: 2025-12-19
*/

class Solution {
public:
    
    // Check if it's safe to place a queen at (row, col)
    bool isSafe(int row, int col, vector<string> &board, int n) {
        // Check column
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q')
                return false;

        // Check upper-left diagonal (\)
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q')
                return false;

        // Check upper-right diagonal (/)
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q')
                return false;

        return true;
    }
    
    // Backtracking helper
    void solve(int row, int n, vector<string> &board, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board); // Base case: all queens placed
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q'; // Place queen
                solve(row + 1, n, board, ans); // Recurse to next row
                board[row][col] = '.'; // Backtrack
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(0, n, board, ans);
        return ans;
    }
};

