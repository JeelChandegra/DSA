/*
Problem: B. Easter Eggs
Link: https://codeforces.com/contest/78/problem/B?mobile=true
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string base = "ROYGBIV";
    string extra = "GBIV"; 

    string result = "";

    result += base;

    n -= 7;

    
    for (int i = 0; i < n; i++) {
        result += extra[i % 4];
        
    }

    cout << result;
    return 0;
}

