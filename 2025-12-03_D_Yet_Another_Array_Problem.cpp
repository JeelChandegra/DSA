/*
Problem: D. Yet Another Array Problem
Link: https://codeforces.com/problemset/problem/2167/D
Date: 2025-12-03
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;
        
        for(int x = 2; x <= 1000000; x++) {
            for(int i = 0; i < n; i++) {
                if(__gcd(a[i], x) == 1) {
                    cout << x << "\n";
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        if(!found) cout << -1 << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

