/*
Problem: 15. 3Sum
Link: https://leetcode.com/problems/3sum/description/
Date: 2025-12-09
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {


sort(v.begin(), v.end());

        vector<vector<int>> ans;

        for (int i = 0; i < v.size(); i++) {

            
            if (i > 0 && v[i] == v[i - 1]) continue;

            int p1 = i + 1;
            int p2 = v.size() - 1;

            while (p1 < p2) {
                int sum = v[i] + v[p1] + v[p2];

                if (sum == 0) {
                    ans.push_back({v[i], v[p1], v[p2]});

                    
                    while (p1 < p2 && v[p1] == v[p1 + 1]) p1++;
                        
                    while (p1 < p2 && v[p2] == v[p2 - 1]) p2--;

                    p1++;
                    p2--;
                }
                else if (sum < 0) {
                    p1++;
                }
                else {
                    p2--;
                }
            }
        }

    return ans;
    }
};
