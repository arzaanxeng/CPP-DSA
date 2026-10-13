#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>intersection_set;
        for( int num : nums2 ) if(s1.find(num) != s1.end()) intersection_set.insert(num);
        vector<int> vec(intersection_set.begin() , intersection_set.end());
        return vec;
    }
};