#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int num = left; num <= right; num++) {
            int temp = num;
            bool isSelfDividing = true;

            while (temp > 0) {
                int rem = temp % 10;

                if (rem == 0 || num % rem != 0) {
                    isSelfDividing = false;
                    break;
                }

                temp /= 10;
            }

            if (isSelfDividing) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
