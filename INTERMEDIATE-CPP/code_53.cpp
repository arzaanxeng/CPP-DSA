#include <iostream>

using namespace std;

void towerOfHanoi(int n, char source, char aux, char dest) {
    // Base Case: If only 1 disk, move it directly
    if (n == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << dest << endl;
        return;
    }

    // Step 1: Move n-1 disks from Source to Auxiliary (using Destination as temp)
    towerOfHanoi(n - 1, source, dest, aux);

    // Step 2: Move the n-th disk from Source to Destination
    cout << "Move disk " << n << " from rod " << source << " to rod " << dest << endl;

    // Step 3: Move n-1 disks from Auxiliary to Destination (using Source as temp)
    towerOfHanoi(n - 1, aux, source, dest);
}

int main() {
    int n = 5 ; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A: Source, B: Auxiliary, C: Destination
    return 0;
}