#include <bits/stdc++.h>
using namespace std;

vector<string> generate_gc(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    vector<string> prev = generate_gc(n - 1);

    vector<string> result;

    // Add '0' prefix
    for (size_t i = 0; i < prev.size(); i++) {
        result.push_back("0" + prev[i]);
    }

    // Add '1' prefix in reverse
    for (int i = (int)prev.size() - 1; i >= 0; i--) {
        result.push_back("1" + prev[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> gray_codes = generate_gc(n);

    for (const auto &gc : gray_codes) {
        cout << gc << "\n";
    }

    return 0;
}