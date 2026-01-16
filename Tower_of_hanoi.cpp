#include <bits/stdc++.h>
using namespace std;

// Move n disks from 'from' to 'to' using 'aux'
void hanoi(int n, int from, int to, int aux) {
    if (n == 0) return;

    hanoi(n - 1, from, aux, to);
    cout << from << " " << to << "\n";
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;

    // total number of moves = 2^n - 1
    cout << ((1LL << n) - 1) << "\n";

    // move from rod 1 to rod 3 using rod 2
    hanoi(n, 1, 3, 2);

    return 0;
}
