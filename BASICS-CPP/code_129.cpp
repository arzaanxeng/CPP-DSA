#include<iostream>
using namespace std;
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size() ;
        int middle = nums[n/2];
        int l = 0 ; 
        int r = n-1;
        while( l < r ){
            if(nums[l]==middle) return false;
            else l++;
            if(nums[r]==middle) return false;
            else r--;
        }
        return true;
    }
};