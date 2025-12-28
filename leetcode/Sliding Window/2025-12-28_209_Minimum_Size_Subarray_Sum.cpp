/*
Problem: 209. Minimum Size Subarray Sum
Link: https://leetcode.com/problems/minimum-size-subarray-sum/description/
Date: 2025-12-28
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int j=0;
        int minlen=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            while(sum>=target){
                minlen=min(minlen,i-j+1);
                sum-=nums[j++];
            }
        }
        return (minlen == INT_MAX) ? 0 : minlen;
        
    }
};
