/*
Problem: Merge Sorted Array
Link: https://leetcode.com/problems/merge-sorted-array/
Date: 2026-01-29
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;        // last element in nums1
        int p2 = n - 1;        // last element in nums2
        int p = m + n - 1;     // last position in nums1

        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
    }
};
int main(){
    vector<int>nums1= {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int m =3;
    int n=3;
    Solution s;

    s.merge(nums1,m,nums2,n);
    for(auto i:nums1){
        cout<<i;
    }
    return 0;
}
