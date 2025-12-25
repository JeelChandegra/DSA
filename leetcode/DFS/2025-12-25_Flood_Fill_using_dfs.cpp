/*
Problem: Flood Fill using dfs
Link: https://leetcode.com/problems/flood-fill/description/
Date: 2025-12-25
*/

class Solution {
public:
        void dfs(vector<vector<int>>& v, int sr, int sc, int color, int main_color) {
    // boundary + color check
    if (sr < 0 || sc < 0 || sr >= v.size() || sc >= v[0].size() || v[sr][sc] != main_color) {
        return;
    }

    // change color
    v[sr][sc] = color;

    // 4 directions
    dfs(v, sr + 1, sc, color, main_color);
    dfs(v, sr - 1, sc, color, main_color);
    dfs(v, sr, sc + 1, color, main_color);
    dfs(v, sr, sc - 1, color, main_color);
}

    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int color) {
        
        
    int main_color = v[sr][sc];

    
    if (main_color != color) {
        dfs(v, sr, sc, color, main_color);
    }

    return v;


    }
};
