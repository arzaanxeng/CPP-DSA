
#include <iostream>
#include <vector>
using namespace std;

// Check whether a queen can be placed at (r, c)
bool IsPossible(int r, int c, vector<vector<char>>& grid, int n) {

    // Check the same column above
    for (int i = 0; i < r; i++) {
        if (grid[i][c] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    int i = r - 1;
    int j = c - 1;

    while (i >= 0 && j >= 0) {
        if (grid[i][j] == 'Q')
            return false;

        i--;
        j--;
    }

    // Check upper-right diagonal
    i = r - 1;
    j = c + 1;

    while (i >= 0 && j < n) {
        if (grid[i][j] == 'Q')
            return false;

        i--;
        j++;
    }

    return true;
}

// Place queens row by row
void f(int r, vector<vector<char>>& grid, int n) {

    // All queens have been placed
    if (r == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << grid[i][j] << " ";

            cout << endl;
        }
        return;
    }

    // Try every column in the current row
    for (int c = 0; c < n; c++) {

        if (IsPossible(r, c, grid, n)) {

            grid[r][c] = 'Q';  // Place queen

            f(r + 1, grid, n); // Solve next row

            grid[r][c] = '.';  // Backtrack
        }
    }
}

int main() {
    int n;
    cout << "Enter board size: ";
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n, '.'));

    f(0, grid, n);
    
    return 0;
}
