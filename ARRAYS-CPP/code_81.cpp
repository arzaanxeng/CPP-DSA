/*
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should return the array of nums such that the array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>positives;
        vector<int>negatives;
        vector<int>ans;
        for( int i = 0 ; i < n ; i++){
            if(nums[i] >= 0) positives.push_back(nums[i]);
            else negatives.push_back(nums[i]);
        }
        int pos_idx = 0 , neg_idx = 0;
        for( int i = 0 ; i < n ; i++){
            if( i%2 == 0) ans.push_back(positives[pos_idx++]);
            else ans.push_back(negatives[neg_idx++]);
        }
        return ans;
    }
};