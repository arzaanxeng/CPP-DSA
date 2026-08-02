// Fibonacci Series.  0 1 1 2 3 5 8 13 21 34 
#include <iostream>
using namespace std;

long long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "\nFibonacci Series: ";
    for (int i = 0; i <= n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}