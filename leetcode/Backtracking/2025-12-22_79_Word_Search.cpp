/*
Problem: 79. Word Search
Link: https://leetcode.com/problems/word-search/
Date: 2025-12-22
*/

class Solution {
public:
bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
    
    if (index == word.size()) return true;

    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()
        || board[i][j] != word[index]) {
        return false;
    }

    // mark visited
    char temp = board[i][j];
    board[i][j] = '#';

    // explore all 4 directions
    bool found =
        dfs(board, word, i + 1, j, index + 1) ||
        dfs(board, word, i - 1, j, index + 1) ||
        dfs(board, word, i, j + 1, index + 1) ||
        dfs(board, word, i, j - 1, index + 1);


    board[i][j] = temp;

    return found;
}

    bool exist(vector<vector<char>>& board, string word) {
        bool flag=false;
  for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
          if( dfs(board, word, i, j, 0)){
            flag = true;
          }
             
        }
    }

    
    return flag;



    }
};
