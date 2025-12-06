/*
Problem: Two Integer Sum II
Link: https://neetcode.io/problems/two-integer-sum-ii/question
Date: 2025-12-06
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int p1 = 0;
        int p2 = arr.size() - 1;

        while (p1 < p2) {
            int sum = arr[p1] + arr[p2];

            if (sum == target) {
                return {p1 + 1, p2 + 1};   
            }
            else if (sum > target) {
                p2--;
            }
            else {
                p1++;
            }
        }

        return {}; 
    }
};

