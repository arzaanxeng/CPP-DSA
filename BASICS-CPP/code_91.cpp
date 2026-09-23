
#include<iostream>
#include<vector>

class Solution {
public:
    int addDigits(int num) {
        if (num <= 9) return num; 
        while (num > 9) {
            long long ans = 0;           
            while (num != 0) {
                long long rem = num % 10;
                ans += rem;
                num = num / 10;
            }
            num = ans; // Set num to the new sum for the next check
        }
        return num;
    }
};