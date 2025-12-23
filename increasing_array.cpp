#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long moves = 0;
    long long prev, curr;

    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr < prev) {
            moves += (prev - curr);
        }
        prev = max(prev, curr);
    }

    cout << moves;
}
