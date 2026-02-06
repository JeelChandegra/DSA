/*
Problem: Longest Substring with At Most K Distinct Characters
Link: chatgpt.com
Date: 2026-02-06
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="cdefghiaaa";
    int n=s.size();
    unordered_map<char,int>freq;
    int left=0;
    int maxLan=0;
    int k=2;
    for(int i=0;i<n;i++){
        freq[s[i]]++;

        while(freq.size()>k){
            freq[s[left]]--;
            if(freq[s[left]]==0){

                freq.erase(s[left]);

            }
            left++;

        }
        maxLan = max(maxLan,i-left+1);
    }


    cout<<maxLan;
    return 0;


}
