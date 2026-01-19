#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b > n) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> p1, p2;

        int p1_low = 1, p1_high = n;
        int p2_low = 1, p2_high = n;

        int win1 = 0, win2 = 0;

        // P1 wins
        while (win1 < a) {
            p1.push_back(p1_high--);
            p2.push_back(p2_low++);
            win1++;
        }

        // P2 wins
        while (win2 < b) {
            p1.push_back(p1_low++);
            p2.push_back(p2_high--);
            win2++;
        }

        // Ties
        while ((int)p1.size() < n) {
            p1.push_back(p1_low);
            p2.push_back(p2_low);
            p1_low++;
            p2_low++;
        }

        for (int x : p1) cout << x << " ";
        cout << "\n";
        for (int x : p2) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
