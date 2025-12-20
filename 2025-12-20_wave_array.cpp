/*
Problem: wave array
Link: https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
Date: 2025-12-20
*/

class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        
    for( int i=1;i<arr.size();i+=2){
        swap(arr[i],arr[i-1]);
    }
    
        
    }
};
