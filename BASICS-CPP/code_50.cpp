// Converting a decimal into binary
#include <iostream>
#include <bitset>
using namespace std;

bool set(int n, int i) {
    int mask = 1 << i;
    // Simplified: directly returns true if bit is set, false otherwise
    return (n & mask) != 0; 
}

int main() {
    int n;
    cout << "\nEnter a number : ";
    cin >> n;

    // Fixed loop condition: decrements from 30 down to 0
    for (int i = 30; i >= 0; i--) {
        if (set(n, i)) cout << "1";
        else cout << "0";
    }
    cout << endl;

    return 0;
}