/*
Problem: Container With Most Water
Link: https://neetcode.io/problems/max-water-container/question
Date: 2025-12-09
*/

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int count =0;
    for(int i=0;i<nums.size();i++){
        int temp;
        for (int j = i; j < nums.size(); j++)
        {
             temp=min(nums[i],nums[j])*(j-i);
              count= max(temp,count);
            
        }
       
    }
    return count;
    }
};
// second approch
class Solution {
public:
    int maxArea(vector<int>& nums) {
        int temp = 0;
    int p1 = 0;
    int p2 = nums.size() - 1;  // fix

    while (p1 < p2) {
        int count = min(nums[p1], nums[p2]) * (p2 - p1);  // fix
        temp = max(temp, count);

        if (nums[p1] < nums[p2]) {
            p1++;
        } else {
            p2--;
        }
    }

    return temp;
    }
};

