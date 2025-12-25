/*
Problem: 26. Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
Date: 2025-12-25
*/

class Solution {
public:
    int removeDuplicates(vector<int>& x) {
          int first = 0;
      for( int i=0;i<x.size();i++){
         if(x[first]!=x[i]){

          first++;
          x[first]=x[i];

         }

      }
      return first+1;
        
    }
};
