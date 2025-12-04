/*
Problem: C. Simple Repetition
Link: https://codeforces.com/problemset/problem/2093/C
Date: 2025-12-04
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long x) {
    if (x <= 1) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve() {
    long long x, k;
    cin >> x >> k;

    if (k == 1) {
        // y = x
        cout << (is_prime(x) ? "YES" : "NO");
    } 
    else {
        // k > 1
        if (x == 1) {
            // Special case:
            // x = 1, k = 2 => y = 11 (prime)
            // x = 1, k > 2 => 111...1 composite
            if (k == 2) cout << "YES";
            else cout << "NO";
        } 
        else {
            // x > 1 and k > 1 → always composite
            cout << "NO";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}

