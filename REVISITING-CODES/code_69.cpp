// Recursion to find multiplication of n natural numbers

#include <iostream>
using namespace std;

long long f(int n) {
    // Base case safely catches 0, 1, and prevents negative number crashes
    if (n <= 1) return 1;
    return n * f(n - 1); 
}

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long ans = f(n);
    cout << "Product is: " << ans << "\n";
    return 0;
}

