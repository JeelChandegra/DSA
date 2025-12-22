/*
Problem: 46. Permutations
Link: https://leetcode.com/problems/permutations/description/
Date: 2025-12-22
*/

class Solution {
public:

    void dfs(vector<int>&v,int index,
        vector<vector<int>>&main_v
      ){

        if(index==v.size()){
            main_v.push_back(v);
        }

        for( int i=index;i<v.size();i++){
            swap(v[index],v[i]);
            dfs(v,index+1,main_v);
            swap(v[index],v[i]);
            
        }
        }
    vector<vector<int>> permute(vector<int>& v) {
        
        
        vector<vector<int>>main_v;
        
       
        dfs(v,0,main_v);
        return main_v;
    }
};
