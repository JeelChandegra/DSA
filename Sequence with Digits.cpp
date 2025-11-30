#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, K;
        cin >> a >> K;

        // We already have a1, so need K-1 transformations
        K--;

        while (K--) {
            string s = to_string(a);

            int mn = 9, mx = 0;

            for (char c : s) {
                int d = c - '0';
                mn = min(mn, d);
                mx = max(mx, d);
            }

            if (mn == 0) break;   // sequence stops changing
            a += 1LL * mn * mx;
        }

        cout << a << "\n";
    }

    return 0;
}
