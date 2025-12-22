/*
Problem: 22. Generate Parentheses
Link: https://leetcode.com/problems/generate-parentheses/description/
Date: 2025-12-22
*/

class Solution {
public:

          void dfs(int n,int open ,int close,vector<string>&v,string &s){

        if(open==n && close ==n){
            v.push_back(s);
            return;
        }

         if(open<n){
              s.push_back('(');
            dfs(n,open+1,close,v,s);
            s.pop_back();
        }
         if(close<open){
              s.push_back(')');
            dfs(n,open,close+1,v,s);
            s.pop_back();
        }





        




    }
    vector<string> generateParenthesis(int n) {
vector<string>v;
         string s;
        dfs(n,0,0,v,s);
        return v;
        
    }
};

