// Peak Index 

#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0 , r = nums.size() - 1;
        while( l < r ){ // Equality is not present as in case of a peak it will always be true , so TLE would occur
            int m = l + (r-l)/2;
            if( nums[m] < nums[m+1]){ // Slope is +
               l = m+1;
            }
            else{                     // Slope is -
                r = m;
            }
        }
        return l;
    }
};