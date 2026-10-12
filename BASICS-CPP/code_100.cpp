#include<iostream>
using namespace std;


class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 0, r = n;
        long long ans = 0;
        
        while (l <= r) {
            long long mid = l + (r - l) / 2; 
            long long coinsNeeded = mid * (mid + 1) / 2;
            
            if (coinsNeeded <= n) {
                ans = mid;       
                l = mid + 1;     
            } else {
                r = mid - 1;     // Too many coins needed, look lower
            }
        }
        return ans;
    }
};