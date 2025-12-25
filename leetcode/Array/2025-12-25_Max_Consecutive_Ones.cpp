/*
Problem: Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/description/
Date: 2025-12-25
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& x) {

         int mx=0;
      int count=0;
      for( int i=0;i<x.size();i++){
        if(x[i]!=1){
         mx = max(mx, count);
          count=0;

        }
        else if(x[i]==1){
          count++;
        }

      }
      return max(mx,count);
        
    }
};
