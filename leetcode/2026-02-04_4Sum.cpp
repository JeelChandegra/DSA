/*
Problem: 4Sum
Link: https://neetcode.io/problems/4sum/history
Date: 2026-02-04
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        vector<vector<int>> ans;
        int n = v.size();
        if (n < 4) return ans;

        sort(v.begin(), v.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && v[i] == v[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && v[j] == v[j - 1]) continue;

                long long find = (long long)target - v[i] - v[j];

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = v[left] + v[right];

                    if (sum == find) {
                        ans.push_back({v[i], v[j], v[left], v[right]});

                        while (left < right && v[left] == v[left + 1]) left++;
                        while (left < right && v[right] == v[right - 1]) right--;

                        left++;
                        right--;
                    }
                    else if (sum < find) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};

