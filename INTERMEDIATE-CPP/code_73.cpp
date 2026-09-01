
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
    // ERROR CAME BECAUSE n = -n would FAIL in case of INT_MIN so converting n -> long long
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        if (N == 0)return 1;
        double ans = myPow(x, N / 2);
        if (N % 2 == 0) return ans * ans;
        else return x * ans * ans;
    }
};