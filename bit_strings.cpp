//explanationn is given in the binary exponentiation.cpp file go and refer there for explanation

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    const long long MOD = 1000000007;

    long long a = 2;
    long long res = 1;

    while (n > 0) {

        // If the current bit is 1,
        // collect the current power
        if (n & 1) {
            res = (res * a) % MOD;
        }

        // Produce the next power:
        // 2^1 -> 2^2 -> 2^4 -> 2^8 ...
        a = (a * a) % MOD;

        // Move to the next binary bit
        n >>= 1;
    }

    cout << res << '\n';

    return 0;
}
