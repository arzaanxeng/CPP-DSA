// Rat Maze Problem 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(int i , int j , int n , int m , string& path , vector<vector<bool>>& visited) {

    // Check if we are outside the grid.
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;

    // Stop if this cell is already visited.
    if (visited[i][j]) return;

    // Destination !!!
    if (i == n - 1 && j == m - 1) {
        cout << path << endl;
        return;
    }

    // Mark the current cell as visited.
    visited[i][j] = true;

    // Right
    path.push_back('R');
    f(i, j + 1, n, m, path, visited);
    path.pop_back();

    // Left
    path.push_back('L');
    f(i, j - 1, n, m, path, visited);
    path.pop_back();

    // Up
    path.push_back('U');
    f(i - 1, j, n, m, path, visited);
    path.pop_back();

    // Down
    path.push_back('D');
    f(i + 1, j, n, m, path, visited);
    path.pop_back();

    // Backtrack: allow this cell in other paths.
    visited[i][j] = false;
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    string path = "";
    vector<vector<bool>> visited(n, vector<bool>(m, false)); // Initially all cells are unvisited so False for each cell
    f(0, 0, n, m, path, visited);
    return 0;
}
