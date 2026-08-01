#include <iostream>
#include <bitset>
using namespace std;

void removing_rightmost_bit(int n) {
    cout << "Original Binary : " << bitset<16>(n) << endl;

    for (int i = 0; i < 32; i++) {
        int mask = 1 << i;
        if (n & mask) { // Check if the i-th bit is SET , if set then if would run
            int clear_mask = ~(1 << i); // All 1s, except a 0 at index i -> return the exact binary except the bit would be unset where the index i -> 0
            n = n & clear_mask;         // Unset the bit
            break;
        }
    }

    cout << "Modified Binary : " << bitset<16>(n) << endl;
    cout << "Number now is   : " << n << endl;
}

int main(void) {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    removing_rightmost_bit(n);
    return 0;
}