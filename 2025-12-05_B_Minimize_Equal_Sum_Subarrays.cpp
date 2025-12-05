/*
Problem: B. Minimize Equal Sum Subarrays
Link: https://codeforces.com/problemset/problem/1998/B
Date: 2025-12-05
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> p(n);
        for(int& i: p) cin >> i;
        rotate(p.begin(), p.begin() + 1, p.end());
        for(int i: p) cout << i << " ";
        cout << "\n";
    }
}
