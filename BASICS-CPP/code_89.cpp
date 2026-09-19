// Sqrt of x
#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0; 
        long long ans = exp(log(x)/2);
        return ans;
    }
};