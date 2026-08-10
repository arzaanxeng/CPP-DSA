/*

There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index 
k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 
indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.!!

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

// Brute Force -> My Soln -> First Approach

    // Search in left sorted portion
    int searchleft(vector<int>& nums, int target, int idx) {
        int l = 0, r = idx - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                return m;
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        return -1;
    }

    // Search in right sorted portion
    int searchright(vector<int>& nums, int target, int idx) {
        int l = idx, r = nums.size() - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                return m;
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int idx = -1;
        // Find pivot
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                idx = i;
                break;
            }
        }
        // Array wasn't rotated
        if (idx == -1) {
            idx = n;
        }
        int ans1 = searchleft(nums, target, idx);
        if (ans1 != -1)
            return ans1;
        return searchright(nums, target, idx);
    }
};