/*
Problem: Squares of a Sorted Array
Link: https://leetcode.com/problems/squares-of-a-sorted-array/
Date: 2026-01-30
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          int n=nums.size();
            vector<int>v(n);
            int right = n-1;
            int left = 0;
            int res_left=n-1;


            while(left<=right){
                if(abs(nums[left])>abs(nums[right])){
                    v[res_left]=nums[left]*nums[left];
                    left++;

                }
                else{
                    v[res_left]= nums[right]*nums[right];
                    right--;
                }


                res_left--;
            
            }
              
            return v;
    }
};
