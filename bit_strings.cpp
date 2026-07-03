#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1000000007;

// Naive approach: O(n)
ll naive_2powN(ll N) {
    ll ans = 1;
    for (ll i = 0; i < N; i++) {
        ans = (ans * 2) % MOD;
    }
    return ans;
}

// Binary Exponentiation: O(log N)
ll optimised_apowb(ll a, ll b) {
    ll res = 1;

    while (b > 0) {

        // If the current bit of b is 1
        if (b & 1) {
            res *= a;
            res %= MOD;
        }

        // Square the base
        a = (a * a) % MOD;

        // Move to the next bit
        b >>= 1;
    }

    return res;
}

void solve() {
    ll n;
    cin >> n;

    cout << optimised_apowb(2, n) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}