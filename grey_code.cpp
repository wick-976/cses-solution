#include <bits/stdc++.h>
using namespace std;

// Function to generate Gray Codes
vector<string> generate_gc(int n) {
    
    // Base case
    if (n == 1) {
        return {"0", "1"};
    }

    // Get (n-1) Gray codes
    vector<string> prev = generate_gc(n - 1);

    // Step 1: reverse
    vector<string> mirrored;
    for (int i = prev.size() - 1; i >= 0; i--) {
        mirrored.push_back(prev[i]);
    }

    // Step 2: build result
    vector<string> result;

    // Add '0' prefix
    for (int i = 0; i < prev.size(); i++) {
        result.push_back("0" + prev[i]);
    }

    // Add '1' prefix (to reversed)
    for (int i = 0; i < mirrored.size(); i++) {
        result.push_back("1" + mirrored[i]);
    }

    return result;
}

void solve() {
    int n;
    cin >> n;

    vector<string> gray_codes = generate_gc(n);

    for (auto gc : gray_codes) {
        cout << gc << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}