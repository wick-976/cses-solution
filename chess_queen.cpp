Eight Queens with Blocked Cells (CSES)

This project solves the **Eight Queens** problem with an additional constraint:
some cells of the chessboard are blocked and cannot contain a queen.

The goal is to count the number of ways to place 8 queens on an 8×8 board such that:
- No two queens attack each other
- Queens are placed only on free cells (`.`)
- Blocked cells (`*`) do not block attacks, they only restrict placement

---

 Approach

- Backtracking is used to place one queen per column
- For each column, all rows are tried
- A helper function checks whether a position is safe
- If all 8 queens are placed successfully, the solution count is increased

---

Time & Space Complexity

- **Time Complexity:**  
  - General N-Queens: `O(N!)`  
  - This problem (N = 8): `O(1)` (constant)

- **Space Complexity:**  
  - `O(1)` (fixed 8×8 board + recursion stack)


 Input Format

- 8 lines of 8 characters
- `.` → free cell  
- `*` → blocked cell

//code starts here 
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

// Check if a queen can be placed at (r, c)
bool is_safe(vector<string>& board, int r, int c) {
    // Cannot place on blocked cell
    if (board[r][c] == '*') return false;

    // Check upper-left diagonal
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'q') return false;
    }

    // Check left side of the same row
    for (int j = c - 1; j >= 0; j--) {
        if (board[r][j] == 'q') return false;
    }

    // Check bottom-left diagonal
    for (int i = r + 1, j = c - 1; i < 8 && j >= 0; i++, j--) {
        if (board[i][j] == 'q') return false;
    }

    return true;
}

// Backtracking function to count valid placements
void count_placements(vector<string>& board, int c, int& count) {
    // All columns filled → one valid solution
    if (c == 8) {
        count++;
        return;
    }

    // Try placing a queen in each row of column c
    for (int r = 0; r < 8; r++) {
        if (is_safe(board, r, c)) {
            board[r][c] = 'q';          // Place queen
            count_placements(board, c + 1, count);
            board[r][c] = '.';          // Backtrack
        }
    }
}

void solve() {
    vector<string> board(8);

    // Read the board
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    int count = 0;
    count_placements(board, 0, count);

    cout << count << nl;
}

int main() {
    solve();
    return 0;
}
