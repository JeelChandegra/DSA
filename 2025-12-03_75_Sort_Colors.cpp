/*
Problem: 75. Sort Colors
Link: https://leetcode.com/problems/sort-colors/
Date: 2025-12-03
*/

class Solution {
public:
    void sortColors(vector<int>& v) {
         int p0=0;
   int p2=v.size()-1;
   int p=0;
   while(p <= p2){

        if(v[p]==2){
            swap(v[p],v[p2]);
            p2--;

        }

        else if(v[p]==1){
           
            p++;
            
        }
        else{
            swap(v[p],v[p0]);
            p0++;
            p++;
            
        }
   }
    }
};
