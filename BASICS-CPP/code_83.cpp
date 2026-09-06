#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // 0 size is exclusive
        int n = nums.size();
        int SUM = (n*(n+1))/2;
        int falseSum = 0;
        for( int num : nums ) falseSum += num;
        return SUM - falseSum;
    }
};