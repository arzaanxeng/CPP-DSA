// Checking wether a number is a power of 2 or not 
#include <iostream>
#include <bitset>
using namespace std;

/*bool checkSet(int n, int i) {
    int mask = 1 << i;
    return (n & mask) != 0; 
}

int main() {
    int n;
    cout << "\nEnter a number : ";
    cin >> n;
    int count = 0;

    for (int i = 30; i >= 0; i--) if (checkSet(n, i)) count++;
    if( count == 1) cout<<"YES , It is a power of 2 !";
    else cout<<"NO , it is not a power of 2 !";
    return 0;
*/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return (n > 0) && ((n & (n - 1)) == 0);
    // A power of 2 has exactly one set bit.
    // n - 1 turns that set bit into 0 and all bits to its right into 1.
    // Therefore, n & (n - 1) becomes 0 only for powers of 2.
}

int main() {
    int n;
    cout << "\nEnter a number : ";
    cin >> n;

    if (isPowerOfTwo(n)) cout << "YES, it is a power of 2!\n";
    else cout << "NO, it is not a power of 2!\n";

    return 0;
}