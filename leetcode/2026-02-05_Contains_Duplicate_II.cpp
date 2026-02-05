/*
Problem: Contains Duplicate II
Link: https://neetcode.io/problems/contains-duplicate-ii/history
Date: 2026-02-05
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
       
            unordered_map<int,int>mp;
            for(int i=0;i<v.size();i++){
                    if(mp.count(v[i])){
                            if(i-mp[v[i]]<=k){
                                return true;
                            }
                    }
                    mp[v[i]]=i;
            }

   return false;
    }
};
