/*
Problem: Two Pointers Technique
Link: https://www.geeksforgeeks.org/dsa/two-pointers-technique/
Date: 2025-12-06
*/

#include <bits/stdc++.h>
using namespace std;



int main() {
    
     vector<int> arr = {-3, -1, 0, 1, 2};
    int target = -2;

    int p1=0;
    int p2=arr.size()-1;

    while(p1<p2){
        if(target==arr[p1]+arr[p2]){
            cout<<"true";
            return 0;
        }
        else if(arr[p1]+arr[p2]>target){
            p2--;
        }
        else{
            p1--;
        }
    }
    cout<<"false";
    return 0;
}

