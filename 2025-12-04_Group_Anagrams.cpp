/*
Problem: Group Anagrams
Link: https://neetcode.io/problems/anagram-groups/history
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 vector<string> strs = {"act","pots","tops","cat","stop","hat"};

    unordered_map<string, vector<string>> mp;

    for (auto s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);   // group original strings
    }

   vector<vector<string>> vc;
    for (auto &p : mp) {
        vc.push_back(p.second);
    }


    for(auto i:vc){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;

    }
}

