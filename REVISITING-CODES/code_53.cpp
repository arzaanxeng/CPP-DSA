/*
You are given a sorted array of integers arr and an integer target.
 Your task is to determine how many times target appears in arr.

Return the count of occurrences of target in the array.
Example 1
Input: arr = [0, 0, 1, 1, 1, 2, 3], target = 1
Output: 3
Explanation: The number 1 appears 3 times in the array.
*/


#include<iostream>
using namespace std;

int lowerBound(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] == target){
            ans = m;
            r = m-1;
        }
        else if( nums[m] > target ) r = m-1;
        else l = m + 1;
    }
    return ans;
}

int upperBound(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] == target){
            ans = m;
            l = m+1;
        }
        else if( nums[m] > target ) r = m-1;
        else l = m + 1;
    }
    return ans;
}

int main(void){
    vector<int>v= {0,0,0,1,1,1,1,2,3,3,3,4,4,5,5,5,5};
    int target = 5;
    int l = lowerBound(v,target);
    int r = upperBound(v,target);
    if( l == -1 && r == - 1) cout<<"The element does not exist in the array !";
    else cout<<"The number of time "<<target<<" occurs is : "<< ((r-l)+ 1);
}