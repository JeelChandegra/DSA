/*
Problem: Valid Palindrome II
Link: https://neetcode.io/problems/valid-palindrome-ii/question
Date: 2026-02-02
*/

class Solution {
public:
bool remove1(string s, int start, int end){
 while(start<end){

        if(s[start]!=s[end]){
            return false;
            
        }
        start++;
            end--;
    }

    return true;

}
    bool validPalindrome(string s) {
        int start=0;
    int end = s.size()-1;

    while(start<end){

        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{

            return remove1(s,start+1,end) || remove1(s,start,end-1);

        }


    }
    return true;
    }
};
