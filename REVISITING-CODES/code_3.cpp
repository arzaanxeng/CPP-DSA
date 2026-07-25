/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, 
then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
*/
#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        // Compare current element with the next element (wraps around to index 0 at the end)
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    // A valid sorted and rotated array has at most 1 drop/inversion
    return count <= 1;
}

int main(void){
    vector<int> nums = {3,4,5,1,2};

    if (check(nums)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}