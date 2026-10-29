#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return true;
    return false;
    }
    string reverseOnlyLetters(string nums) {
        int l = 0 ;
        int r = nums.size() - 1 ;
        while(l<=r){
            if(isAlphabet(nums[l]) && isAlphabet(nums[r])){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
            else if(!isAlphabet(nums[l])) l++;
            else r--;
        }
        return nums;
    }
};