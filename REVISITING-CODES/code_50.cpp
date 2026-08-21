/*
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

The lower bound algorithm finds the first and smallest index in a sorted array where the value at
 that index is greater than or equal to a given key i.e. x.

If no such index is found, return the size of the array.
*/
#include<iostream>
using namespace std;

int lowerBound(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] >= target){
            ans = m;
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}

int main(void){
    vector<int>v= {3,5,8,15,19,23,47,49,51};
    int target = 30;
    int ans = lowerBound(v,target);
    if(ans==-1) cout<<"The element >= "<<target<<" does not exist in the array !";
    else cout<<"The element >= "<<target<<" exist at index "<<ans;
}