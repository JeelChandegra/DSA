/*
Problem: 169. Majority Element
Link: https://leetcode.com/problems/majority-element/description/
Date: 2025-12-06
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate = 0;
        int count = 0;

        for (int x : nums) {
            if (count == 0) {
                candidate = x;   
            }

            
            if (x == candidate)
                count++;       
            else
                count--;        
        }

        return candidate;   
    }
};

