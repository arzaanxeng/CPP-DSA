// 81. Search in Rotated Sorted Array II


#include<iostream>
using namespace std;

bool search( vector<int>& nums , int target ){

    int l = 0 , r = nums.size() - 1;
    while(l <= r){
        int m = l + (r-l)/2;
        if( nums[m] == target ) return true;

        if( nums[l] == nums[m] && nums[r] == nums[m]){
            r--;
            l++;
            continue; // To skip this iteration 
        }

        // Left Sorted
        if(nums[l] <= nums[m]){
            if( target >= nums[l] && target < nums[m] ) r = m-1;
            else l = m+1;
        }
        // Right Sorted 
        else{
            if( target <= nums[r] && target > nums[m]) l = m+1;
            else r = m-1;
        }
    }
    return false;
}

int main(void){
    vector<int> nums = {2,2,2,0,0,0,0,1,1,1,2};
    int target = 2;
    bool ans = search(nums,target);
    if(ans) cout<<"Yes , it exists in the array ";
    else cout<<"No , it does not exist in the array ";
    return 0;
}