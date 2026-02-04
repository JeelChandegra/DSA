/*
Problem: sliding window
Link: chatgpt.com
Date: 2026-02-04
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v={2,1,5,1,3,2};
    int k=3;

    int windowSum = 0;
    for(int i = 0; i < k; i++)
        windowSum += v[i];

    int maxSum = windowSum;

    for(int i=3;i<v.size();i++){
        windowSum+=v[i];
        windowSum-=v[i-k];
        maxSum= max(windowSum,maxSum);
    }
    cout<<maxSum;
}


