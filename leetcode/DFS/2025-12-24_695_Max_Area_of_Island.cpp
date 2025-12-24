/*
Problem: 695. Max Area of Island
Link: https://leetcode.com/problems/max-area-of-island/description/
Date: 2025-12-24
*/

class Solution {
public:
    int dfs(vector<vector<int>>&v,int i,int j){

    if(i<0||j<0||i>=v.size()||j>=v[0].size()){
        return 0;
    }
    if (v[i][j] == 0) return 0;
    v[i][j]=0;
   int area=1;
       area+= dfs(v,i+1,j);
       area+= dfs(v,i-1,j);
        area+=dfs(v,i,j+1);
        area+=dfs(v,i,j-1);

        return area;







}
    int maxAreaOfIsland(vector<vector<int>>& v) {
          int count=0;
    for( int i =0;i<v.size();i++){
       
        for( int j=0;j<v[0].size();j++){
           if(v[i][j]==1){
            count =max(count,dfs(v,i,j));
           
           }
        }
   }
   return count; 
    }
};
