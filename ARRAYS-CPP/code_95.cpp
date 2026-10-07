// Cat and Dog - II
#include<iostream>
#include<vector>
using namespace std;

// The problem is also solved keeping in mind that dog is sitting initially @ (0,0) on top left of the GRID !!!

void f(int n, int m, int i, int j, vector<vector<int>>& grid, string& s) {

    // Out of bounds
    if(i == n || j == m) return;

    // Blocked cell
    if(grid[i][j] == 1) return;

    // Destination reached
    if(i == n-1 && j == m-1) {
        cout << s << endl;
        return;
    }

    // Down
    s.push_back('D');
    f(n, m, i+1, j, grid, s);
    s.pop_back();

    // Right
    s.push_back('R');
    f(n, m, i, j+1, grid, s);
    s.pop_back();
}

int main() {

    int n, m;

    cout << "Enter rows: ";
    cin >> n;

    cout << "Enter columns: ";
    cin >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    cout << "Enter the status of the grid cells {0 means open, 1 means blocked}:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<"Enter the status of cell ("<<i<<" , "<<j<<")\n";
            cin >> grid[i][j];
        }
    }

    string path = "";

    f(n, m, 0, 0, grid, path);
}