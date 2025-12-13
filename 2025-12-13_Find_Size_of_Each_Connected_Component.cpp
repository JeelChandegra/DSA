/*
Problem: Find Size of Each Connected Component
Link: chatgpt.com
Date: 2025-12-13
*/

#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], vector<bool>&v,int num) {
    num=1;
    v[node] = true;
   

    for(auto i:adj[node]){
        if(!v[i]){
           num+= dfs(i,adj,v,num);
        }
    }
    return num;
   
}

int main() {
    int n, m; 
    cin >> n >> m;

    vector<int> adj[n];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

  
    vector<bool>v(n, false);
    int c=0;

    for( int i =0;i<n;i++){
        if(!v[i]){
            
           cout<< dfs(i,adj,v,0)<<" ";
            
        }
    }
  

    return 0;
}

