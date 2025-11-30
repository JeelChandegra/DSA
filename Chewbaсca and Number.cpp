#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string num = "";

    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        // First digit special case: cannot be 0
        if (i == 0 && inverted == 0) {
            num += (digit + '0');
        } else {
            // Choose the smaller between original and inverted
            if (inverted < digit) {
                num += (inverted + '0');
            } else {
                num += (digit + '0');
            }
        }
    }

    cout << num << endl;
}
