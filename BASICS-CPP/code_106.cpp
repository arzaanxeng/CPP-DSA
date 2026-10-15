#include<iostream>
#include<vector> 
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long ans1 = LLONG_MIN;
        long long ans2 = LLONG_MIN;
        long long ans3 = LLONG_MIN;

        for( int x : nums ){
            if( x == ans1 || x == ans2 || x == ans3 ) continue; // Move ahead coz of repetition not allowed 
            if( x > ans1 ){
                ans3 = ans2;
                ans2 = ans1;
                ans1 = x;
            }
            else if( x > ans2 ){
                ans3 = ans2;
                ans2 = x;
            }
            else if(ans3 < x ) ans3 = x;
        }
        if( ans3 == LLONG_MIN ) return ans1; // In case of lesser than 3 unique elements 
        return ans3;
    }
};