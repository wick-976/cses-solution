#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long s = (n * 1LL * (n + 1)) / 2;

    if (s % 2 == 1) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    s /= 2; // target sum

    vector<int> st1, st2;

    for (int i = n; i >= 1; i--) {
        if (s >= i) {
            st1.push_back(i);
            s -= i;
        } else {
            st2.push_back(i);
        }
    }

    cout << st1.size() << "\n";
    for (int x : st1) cout << x << " ";
    cout << "\n";

    cout << st2.size() << "\n";
    for (int x : st2) cout << x << " ";
    cout << "\n";

    return 0;
}
