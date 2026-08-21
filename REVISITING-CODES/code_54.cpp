/*
Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

*/
#include<iostream>
using namespace std;

int main(void){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 1;

    int l = 0 , r = nums.size() - 1 , ans = -1 ;
    while(l <= r){
        int m = l + (r-l)/2;
        if( nums[m] == target ) ans = m;

        // Left Sorted
        if(nums[l] <= nums[m]){
            if( target >= nums[l] && target < nums[m] ) r = m-1;
            else l = m+1;
        }
        // Right Sorted 
        else{
            if( target <= nums[r] && target > nums[m]) l = m+1;
            else r = m-1;
        }
    }
    cout<<"The answer is : "<<ans;
    return 0;
}