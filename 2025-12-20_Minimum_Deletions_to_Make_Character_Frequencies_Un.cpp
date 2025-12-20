/*
Problem: Minimum Deletions to Make Character Frequencies Unique
Link: https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/
Date: 2025-12-20
*/

class Solution {
public:
    int minDeletions(string s) {
       unordered_map<char,int>map;
    for(char x:s){
        map[x]++;
    }
    std::vector<int> v;
    for(auto i:map){
        v.push_back(i.second);
    }
    sort(v.begin(),v.end(),greater<int>());
        int deletion=0;
        int maxallowed=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>maxallowed){
            deletion+=v[i]-maxallowed;

        }
        else{
            maxallowed=v[i];
        }
        maxallowed=max(0,maxallowed-1);
    }
    return deletion;
        
    }
};
