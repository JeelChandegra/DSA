/*
Problem: 47. Permutations II
Link: https://leetcode.com/problems/permutations-ii/description/
Date: 2025-12-23
*/

class Solution {
public:

void dfs( int index,vector<int>&v,vector<vector<int>>&main_v){
    if(index==v.size()){
        main_v.push_back(v);
        return;
    }
    unordered_set<int>map;
    for(int i=index;i<v.size();i++){
        if(map.count(v[i]))continue;
        map.insert(v[i]);
        swap(v[i],v[index]);
        dfs(index+1,v,main_v);
        swap(v[i],v[index]);

    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>main_v;
        dfs(0,nums,main_v);
        return main_v;
    }
};
