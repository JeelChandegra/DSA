/*
Problem: C. Superultra's Favorite Permutation
Link: https://codeforces.com/problemset/problem/2037/C
Date: 2025-12-05
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if(n <= 4) {
            cout << -1 << "\n";
            continue;
        }

        // Print evens except 4
        for(int i = 2; i <= n; i += 2) {
            if(i != 4) cout << i << " ";
        }

        // print 4 and 5 together
        cout << "4 5 ";

        // Print odds except 5
        for(int i = 1; i <= n; i += 2) {
            if(i != 5) cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}

