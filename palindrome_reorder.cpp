#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // count frequency
    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;

    // count odd frequencies
    int odd = 0;
    for (auto &p : freq) {
        if (p.second & 1) odd++;
    }

    cout << (odd <= 1 ? "Yes\n" : "No\n");
    return 0;
}
