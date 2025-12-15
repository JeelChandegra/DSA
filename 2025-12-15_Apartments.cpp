/*
Problem: Apartments
Link: https://cses.fi/problemset/task/1084/
Date: 2025-12-15
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> desired(n), apartment(m);

    for (int i = 0; i < n; i++)
        cin >> desired[i];

    for (int i = 0; i < m; i++)
        cin >> apartment[i];

    sort(desired.begin(), desired.end());
    sort(apartment.begin(), apartment.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (abs(desired[i] - apartment[j]) <= k) {
            count++;
            i++;
            j++;
        }
        else if (apartment[j] < desired[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }

    cout << count << "\n";
}

