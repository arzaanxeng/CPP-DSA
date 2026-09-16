// Sqrt of x
#include<iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0; 
        long long l = 1, r = x;
        long long ans = 0;
        while (l <= r) {
            long long m = l + (r - l) / 2;
            // Use long long for m * m to prevent integer overflow
            if (m * m <= x) {
                ans = m;      
                l = m + 1;     
            } else {
                r = m - 1;     
            }
        }
        
        return ans;
    }
};