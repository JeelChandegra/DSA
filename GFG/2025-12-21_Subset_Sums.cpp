/*
Problem: Subset Sums
Link: https://www.geeksforgeeks.org/problems/subset-sums2234/1
Date: 2025-12-21
*/

class Solution {
  public:
  void dfs(vector<int>&v,
    vector<int>&temp,
    vector<vector<int>>&mainv,int index){

    if(index==v.size()){

        mainv.push_back(temp);
        return;
    }


    temp.push_back(v[index]);
    
    dfs(v,temp,mainv,index+1);
    
    temp.pop_back();
    dfs(v,temp,mainv,index+1);



}
  
    vector<int> subsetSums(vector<int>& v) {
        
        vector<int>temp;
    vector<vector<int>>mainv;


    dfs(v,temp,mainv,0);
    vector<int>result;
    for(auto i:mainv){
        int count=0;
        for(auto x:i){
            count+=x;
        }
       result.push_back(count);
    }
    return result;
        
    }
};
