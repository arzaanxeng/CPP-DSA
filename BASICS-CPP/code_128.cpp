#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // if(nums.size() < k ) return false;  --> Not true
        map<int,int>m;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if(m.find(nums[i]) != m.end() && abs(m[nums[i]]-i) <= k ) return true;
            else m[nums[i]] = i;
        }
        return false;
    }
};