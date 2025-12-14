/*
Problem: 37. Sudoku Solver
Link: https://leetcode.com/problems/sudoku-solver/description/
Date: 2025-12-14
*/

class Solution {
public:
    bool issafe(vector<vector<char>>& board, int row, int col, char ch) {
        for (int i = 0; i < 9; i++) {
            // row check
            if (board[row][i] == ch) return false;

            // column check
            if (board[i][col] == ch) return false;

            // 3x3 box check
            int r = 3 * (row / 3) + i / 3;
            int c = 3 * (col / 3) + i % 3;
            if (board[r][c] == ch) return false;
        }
        return true;
    }

    bool fun(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') {
                    for (char ch = '1'; ch <= '9'; ch++) {
                        if (issafe(board, i, j, ch)) {
                            board[i][j] = ch;

                            if (fun(board))
                                return true;

                            board[i][j] = '.'; // backtrack
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        fun(board);
    }
};

