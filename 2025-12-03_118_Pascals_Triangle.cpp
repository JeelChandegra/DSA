/*
Problem: 118. Pascal's Triangle
Link: https://leetcode.com/problems/pascals-triangle/description/
Date: 2025-12-03
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

    vector<vector<int>> main_vector = {{1}, {1, 1}};

    for (int i = 2; i < 5; i++) {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++) {
            row[j] = main_vector[i - 1][j - 1] + main_vector[i - 1][j];
        }   

        main_vector.push_back(row);
    }

    // Correct printing
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < main_vector[i].size(); j++) {
            cout << main_vector[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();   // ❗ YOU FORGOT THIS

    return 0;
}

