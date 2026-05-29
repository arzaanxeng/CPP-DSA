    
#include<iostream>
using namespace std;

int main(void){
    int n, m;
    cout << "\nEnter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < m ; k++){
            cout << "Enter the value of " << i << " row and " << k << " column : ";
            cin >> arr[i][k];
        }
        cout << endl;
    }

    // Displaying the original full matrix
    cout << "Original Matrix:\n";
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < m ; k++){
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Printing ONLY the boundary elements of the 2-D array
    cout << "Boundary Matrix:\n";
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < m ; k++){
            // Condition: Top row OR Bottom row OR Leftmost column OR Rightmost column
            if(i == 0 || i == n - 1 || k == 0 || k == m - 1) {
                cout << arr[i][k] << " ";
            } else {
                cout << "  "; // Two spaces to perfectly align with the empty center
            }
        }
        cout << "\n"; // Moves to the next row naturally without creating extra gaps
    }

    return 0;
}