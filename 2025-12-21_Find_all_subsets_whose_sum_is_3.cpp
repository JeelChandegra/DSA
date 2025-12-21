/*
Problem: Find all subsets whose sum is 3.
Link: chatgpt.com
Date: 2025-12-21
*/

#include <bits/stdc++.h>
using namespace std;


void dfs(vector<int>&v,
    vector<int>&temp,
    vector<vector<int>>&mainv,int target ,int index,int count){

    if(count==target){
        mainv.push_back(temp);
        return;
    }
    if(count>target||index==v.size()){
        return;
    }

    temp.push_back(v[index]);
    count+=v[index];
    dfs(v,temp,mainv,target,index+1,count);
    count-=v[index];
    temp.pop_back();
    dfs(v,temp,mainv,target,index+1,count);



}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>v={1,2,3};
    vector<int>temp;
    vector<vector<int>>mainv;


    dfs(v,temp,mainv,3,0,0);

    for(auto i:mainv){
        for(auto x:i){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}

