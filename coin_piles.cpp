#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    // Each move removes 3 coins total (2 from one pile, 1 from the other)
    // Both piles must reach zero in parallel
    if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
