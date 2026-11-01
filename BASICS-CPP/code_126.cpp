#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long ans = INT_MAX;
        for( int i = 0 ; i < nums.size()-1  ; i+=2){
            string current = to_string(nums[i]) + to_string(nums[i+1]);
            ans = min(ans,stoll(current));
        }  
        return ans;
    }
};