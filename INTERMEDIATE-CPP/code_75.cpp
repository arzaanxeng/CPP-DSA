// Find Smallest Divisor Given A Threshold
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    long long isPossible(vector<int>& nums , int m){
        long long sum = 0;
        for( int num : nums ) sum += (num + m - 1) / m; // Like Koko Problem
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1 , r = *max_element(nums.begin() , nums.end()) , ans = r;
        while( l <= r ){
            int m = l + (r-l)/2;
            long long result = isPossible(nums,m);
            if( result  <= threshold ){
                ans = m;
                r = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};