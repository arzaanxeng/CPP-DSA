#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for( int i = 0 ; i < nums.size() ; i++ ) nums[i] = nums[i]*nums[i];
        // sort(nums.begin() , nums.end());
        // return nums;
        int l = 0 , r = nums.size() - 1;
        int k = nums.size() - 1;
        vector<int>temp(nums.size(),0);
        while( l <= r ){
            if(abs(nums[l]) > abs(nums[r])){
                temp[k--] = (nums[l]*nums[l]);
                l++;
            }
            else{
                temp[k--] = (nums[r]*nums[r]);
                r--;
            }
        }
        return temp;
    }
};