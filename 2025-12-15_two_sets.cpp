/*
Problem: two sets
Link: https://cses.fi/problemset/task/1092/
Date: 2025-12-15
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<int> a, b;

    if (n % 4 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i % 2 == 1) {
                a.push_back(i);
                a.push_back(n - i + 1);
            } else {
                b.push_back(i);
                b.push_back(n - i + 1);
            }
        }
    } else { // n % 4 == 3
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);

        for (int i = 4; i <= n; i += 4) {
            a.push_back(i);
            a.push_back(i + 3);
            b.push_back(i + 1);
            b.push_back(i + 2);
        }
    }

    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";

    return 0;
}

