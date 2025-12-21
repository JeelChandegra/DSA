/*
Problem: 77. Combinations
Link: https://leetcode.com/problems/combinations/description/
Date: 2025-12-21
*/

class Solution {
public:
void dfs(int n,int k,vector<vector<int>>&main_v,vector<int>&temp,int index){
        if(temp.size()==k){

            main_v.push_back(temp);
            return;
        }

        if(index>n){
            return;
        }

        temp.push_back(index);
        dfs(n,k,main_v,temp,index+1);
        temp.pop_back();
        dfs(n,k,main_v,temp,index+1);

        


    }
    vector<vector<int>> combine(int n, int k) {

         vector<vector<int>>main_v;
        vector<int>temp;
        dfs(n,k,main_v,temp,1);
        return main_v;
        
    }
};
