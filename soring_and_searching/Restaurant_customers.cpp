#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<pair<int,int>> &time_slots) {
    int increse = 0;
    int maxi = 0;
    for (int i = 0; i < n*2; i++) {
        increse += time_slots[i].second;
        maxi = max(maxi, increse);
    }
    cout << maxi;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long m;
    cin >> m;

    vector<pair<int,int>> time_slots;
    long long ft, dt;
    for (long long i = 0; i < m; i++) {
        cin >> ft >> dt;
        time_slots.push_back({ft, 1});
        time_slots.push_back({dt, -1});
    }

    sort(time_slots.begin(), time_slots.end());
    solve(m, time_slots);
}
