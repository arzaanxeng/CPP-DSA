#include <iostream>
using namespace std;

long long fastPow(long long n, int x) {
    if (x == 0) return 1;
    long long half = fastPow(n, x / 2);
    // Even Power
    if (x % 2 == 0) return half * half;
    // Odd Power
    else return n * half * half;
}