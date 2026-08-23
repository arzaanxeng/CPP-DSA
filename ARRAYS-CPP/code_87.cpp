// Single Element

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        
        while (l <= r) {
            if (l == r) return nums[l];

            int m = l + (r - l) / 2;

            if (m % 2 == 0) {
                // ODD EVEN 
                if (m > 0 && nums[m - 1] == nums[m]) r = m - 2;
                // EVEN ODD 
                else if (m + 1 < nums.size() && nums[m + 1] == nums[m]) l = m + 2;
                else return nums[m];
            } 

            else {
                // EVEN ODD 
                if (m + 1 < nums.size() && nums[m] == nums[m + 1]) r = m - 1;
                // ODD EVEN 
                else if (m > 0 && nums[m - 1] == nums[m]) l = m + 1;
                else return nums[m];
            }
        }
        return nums[l];
    }
};