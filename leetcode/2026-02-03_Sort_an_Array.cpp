/*
Problem: Sort an Array
Link: https://neetcode.io/problems/sort-an-array/history
Date: 2026-02-03
*/

class Solution {
public:
    int partition(vector<int>&v,int start,int end){
        int ind=start-1;
        int p = v[end];
        for(int i=start;i<end;i++){
            if(v[i]<p){
                ind++;
                swap(v[i],v[ind]);
            }
        }
        ind++;
        swap(v[end],v[ind]);
        return ind;

    }
    void quick(vector<int>&v,int start,int end){
        if(start<end){
            int p = partition(v,start,end);
            quick(v,start,p-1);
            quick(v,p+1,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        
        quick(nums,0,nums.size()-1);
        return nums;

    }
};
