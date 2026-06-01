#include <iostream>
using namespace std;

int search_insert_target(int arr[], int n, int target) {
    int l = 0, r = n - 1;
   
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == target) {
            return m; // Target found
        } 
        else if (arr[m] > target) {
            r = m - 1; // Look left
        } 
        else {
            l = m + 1; // Look right
        }
    }

    // If we exit the loop, target wasn't found.
    // 'l' is magically pointing to the correct insertion index!
    return l; 
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int n = 4;
    
    cout << "Insert 5: " << search_insert_target(arr, n, 5) << endl; // Output: 2 (found at index 2)
    cout << "Insert 2: " << search_insert_target(arr, n, 2) << endl; // Output: 1 (should be between 1 and 3)
    cout << "Insert 7: " << search_insert_target(arr, n, 7) << endl; // Output: 4 (should be at the end)
    
    return 0;
}