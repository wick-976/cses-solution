#include <bits/stdc++.h>
using namespace std;

// Shortcuts
#define nl '\n'
#define sp ' '
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>

// All 8 knight moves
vector<pii> offsets = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {-1, 2}, {1, -2}, {-1, -2}
};

// Check if cell (i, j) is inside the n x n grid
bool is_valid(int i, int j, int n) {
    return i >= 0 && i < n && j >= 0 && j < n;
}

// BFS to compute minimum knight moves from (0,0)
void bfs(vvi &grid, pii start) {
    int n = grid.size();
    queue<pii> q;

    q.push(start);
    grid[start.first][start.second] = 0; // distance to itself

    while (!q.empty()) {
        auto [u, v] = q.front();
        q.pop();

        // Try all 8 knight moves
        for (auto [dx, dy] : offsets) {
            int i = u + dx;
            int j = v + dy;

            // Check boundary + unvisited
            if (is_valid(i, j, n) && grid[i][j] == -1) {
                grid[i][j] = grid[u][v] + 1;
                q.push({i, j});
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    // Initialize grid with -1 (unvisited)
    vvi grid(n, vi(n, -1));

    // Run BFS from top-left corner
    bfs(grid, {0, 0});

    // Print the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << sp;
        }
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
