// Sort 0's and 1's
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> v[i];
    }
    
    int l = 0, r = n - 1;
    while (l < r) {
        if (v[l] == 1) {
            swap(v[l], v[r]);
            r--; 
        } 
        else l++; 
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}