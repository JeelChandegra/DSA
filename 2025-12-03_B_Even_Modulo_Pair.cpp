/*
Problem: B. Even Modulo Pair
Link: https://codeforces.com/problemset/problem/2164/B
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

        
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if((a[j] % a[i]) % 2 == 0) {  
                    cout << a[i] << " " << a[j] << "\n";
                    found = true;
                    break;  
                }
            }
            if(found) break;
        }

        if(!found) cout << -1 << "\n";  // no pair exists
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

