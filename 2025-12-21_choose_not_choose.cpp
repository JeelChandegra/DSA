/*
Problem: choose /not choose
Link: chatgpt.com
Date: 2025-12-21
*/

#include <bits/stdc++.h>
using namespace std;


void dfs(vector<char>&v,vector<char>&temp,vector<vector<char>>&main,int index){

    if(index==v.size()){
        main.push_back(temp);
        return;
    }

    temp.push_back(v[index]);
    dfs(v,temp,main,index+1);
    temp.pop_back();

    dfs(v,temp,main,index+1);

}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char>v={'a','b','c'};
    vector<char>temp;
    vector<vector<char>>mainv;


    dfs(v,temp,mainv,0);

    for(auto i:mainv){
        for(auto x:i){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}

