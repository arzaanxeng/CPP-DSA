#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int bit = 0; bit < 32; bit++) {
            int count = 0;

            for (int x : nums) {
                // check whether bit is set
                if ((x >> bit) & 1) {
                    count++;
                }
            }

            if (count % 3 != 0) {
                // set bit in ans
                ans |= (1 << bit);
            }
        }

        return ans;
    }
};