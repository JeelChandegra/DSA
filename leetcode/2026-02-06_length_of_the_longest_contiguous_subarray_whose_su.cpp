/*
Problem: length of the longest contiguous subarray whose sum is ≤ k
Link: chatgpt.com
Date: 2026-02-06
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
   
    vector<int> v = {2, 1, 3, 4, 1, 1, 1};
    int n = v.size();
    int sum = 0;
    int k = 7;
    int left = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++){
        sum += v[i];  // expand window

        while(sum > k){   // 🔥 FIX HERE
            sum -= v[left];
            left++;
        }

        maxLen = max(maxLen, i - left + 1);
    }

    cout << maxLen;
}

