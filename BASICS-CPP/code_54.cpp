#include <iostream>
#include <bitset>
using namespace std;
// Optimised Solution to my answer !

void removing_rightmost_bit(int n) {
    cout << "Original Binary : " << bitset<64>(n) << endl;
    n =(n & (n-1));
// (n - 1) flips the rightmost set bit to 0 and
// changes all the bits to its right into 1.
// performing n & (n - 1) clears only the rightmost set bit
// while leaving all higher bits unchanged.

    cout << "Modified Binary : " << bitset<64>(n) << endl;
    cout << "Number now is   : " << n << endl;
}

int main(void) {
    long long n;
    cout << "Enter a number : ";
    cin >> n;
    removing_rightmost_bit(n);
    return 0;
}