/*
Problem: Indexes of Subarray Sum
Link: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
Date: 2026-02-12
*/

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
       int n = arr.size();
    int start = 0;
    int current_sum = 0;

      
      
    for (int end = 0; end < n; end++) {
        current_sum += arr[end];

        // Shrink the window from the left if sum exceeds target
        while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }

        // Check if we found the subarray
        if (current_sum == target) {
            // Return 1-based indices
            return {start + 1, end + 1};
        }
    }

    // No subarray found
    return {-1};

      
        
    }
};
