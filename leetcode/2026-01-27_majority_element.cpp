/*
Problem: majority element
Link: https://neetcode.io/problems/majority-element/question?list=neetcode250
Date: 2026-01-27
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate; 
    }
};
